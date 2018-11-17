#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#define MESSAGE 512

int ESC = 27;

void lock()
{
	while (open("lockfile",O_CREAT|O_EXCL, 0)==-1)
    {
       printf("Serwer zajety, prosze czekac\n\n");
       sleep(3);
    }
}

void send()
{
	int data;
	char bufor[MESSAGE] ={0x00,};
	char character[1] = {0x00,};
	int counter = 0;

	char user[100] = {0x00,};
	getlogin_r(user, 100);
	char output[1024] = {0x00,};

	while((data = open("dane.txt", O_RDWR|O_CREAT|O_APPEND, 0711)) < 0)
	{

	}

	if(data != 0)
	{
		printf("\n%s:\n", user);
		while(1)
		{
			read(0,character,1);
			if(character[0] == ESC)
            {
				counter = sprintf(output, "%s:\n%s" , user, bufor);
				write(data, output, counter);
				break;
			}
				bufor[counter] = character[0];
				counter++;

		}
	}
}

void receive()
{
	int results;
	char bufor[MESSAGE] ={0x00,};

	while((results = open("results.txt", O_RDWR)) < 0)
	{
	}

	if(results != 0)
	{
		while(read(results,text,512) < 1)
		{
		}
		printf("MESSAGE Z SERWERA:\n%s", text);
		close(results);
		unlink("wyniki.txt");
	}
}


//Glowna funkcja programu - pobieranie nazwy usera i wywolywanie procedur wysylki i odbioru MESSAGEi wraz z laczenie i rozlaczaniem z serwerem
int main(int argc, char *argv[])
{
	char user[100] = {0x00,};
	getlogin_r(user, 100);

	printf("KLIENT\n");
	printf("(Zalogowany: %s)\n" , user);

		lock();
		send();
		receive();
	  getchar();
    return 0;
}
