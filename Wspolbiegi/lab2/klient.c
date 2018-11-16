#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#define WIADOMOSC 512

int ESC = 27;
//Nawiazywanie polaczenia z serwerem
void lock()
{
	while (open("lockfile",O_CREAT|O_EXCL, 0)==-1)
    {
       printf("Serwer zajety, prosze czekac\n\n");
       sleep(3);
    }
}

//Procedura wysylania tresci wiadomosci do serwera (bufor dane.txt)
void send()
{
	int dane;
	char bufor[WIADOMOSC] ={0x00,};
	char znak[1] = {0x00,};
	int counter = 0;

	char uzytkownik[100] = {0x00,};
	getlogin_r(uzytkownik, 100);
	char output[1024] = {0x00,};

	while((dane = open("dane.txt", O_RDWR|O_CREAT|O_APPEND, 0711)) < 0)
	{

	}

	if(dane != 0)
	{
		printf("\n%s:\n", uzytkownik);
		while(1)
		{
			read(0,znak,1);
			if(znak[0] == ESC)
            {
				counter = sprintf(output, "%s:\n%s" , uzytkownik, bufor);
				write(dane, output, counter);
				break;
			}
				bufor[counter] = znak[0];
				counter++;

		}
	}
}

//Odbieranie wiadomosci zwrotnej od serwera (bufor wyniki.txt)
void receive()
{
	int wyniki;
	char bufor[WIADOMOSC] ={0x00,};

	while((wyniki = open("wyniki.txt", O_RDWR)) < 0)
	{
	}

	if(wyniki != 0)
	{
		while(read(wyniki,bufor,512) < 1)
		{
		}
		printf("WIADOMOSC Z SERWERA:\n%s", bufor);
		close(wyniki);
		unlink("wyniki.txt");
	}
}


//Glowna funkcja programu - pobieranie nazwy uzytkownika i wywolywanie procedur wysylki i odbioru wiadomosci wraz z laczenie i rozlaczaniem z serwerem
int main(int argc, char *argv[])
{
	char uzytkownik[100] = {0x00,};
	getlogin_r(uzytkownik, 100);

	printf("Witaj w komunikatorze tekstowym - KLIENT\n");
	printf("(Zalogowany jako:%s)\n" , uzytkownik);

		lock();
		send();
		receive();
	getchar();
    return 0;
}
