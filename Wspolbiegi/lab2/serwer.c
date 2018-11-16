#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#define WIADOMOSC 512

int ESC = 27;
//Odbieranie wiadomosci od klienta (bufor dane.txt)
void receive()
{
   int dane = 0;
   char bufor[WIADOMOSC] ={0x00,};

   while((dane = open("dane.txt", O_RDWR)) < 0)
   {

   }

   if(dane != 0)
   {
		while(read(dane,bufor,512) < 1)
		{
		}
		printf("%s" , bufor);
   }
}

//Procedura wysylania tresci wiadomosci zwrotnej do klienta (bufor wyniki.txt)
void send()
{
	int wyniki;
	char bufor[WIADOMOSC] ={0x00,};
	char znak[1] = {0x00,};
	int counter = 0;

	while((wyniki = open("wyniki.txt", O_RDWR|O_CREAT|O_EXCL, 0711)) < 0)
	{

	}

	if(wyniki != 0)
	{
		printf("SERWER - NAPISZ WIADOMOSC ZWROTNA DLA KLIENTA:\n");
		while(1)
		{
			read(0,znak,1);

			if(znak[0] == (char)ESC)
			{
				write(wyniki, bufor, counter);
				close(wyniki);
				break;
			}
			bufor[counter] = znak[0];
			counter++;
      unlink("lockfile");
      unlink("dane.txt");
		}
	}
}


//Wywolywanie procedur
int main()
{
	printf("KOMUNIKATOR TEKSTOWY - SERWER\n");

	while(1)
	{
		receive();
		send();
		printf("\n\n");
	}

	return 0;
}
