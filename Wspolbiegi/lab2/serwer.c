#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#define MESSAGE 512

int ESC = 27;

void receive()
{
   int data = 0;
   char bufor[MESSAGE] ={0x00,};

   while((data = open("dane.txt", O_RDWR)) < 0)
   {

   }

   if(data != 0)
   {
		while(read(data,bufor,512) < 1)
		{
		}
		printf("%s" , bufor);
   }
}

void send()
{
	int results;
	char bufor[MESSAGE] ={0x00,};
	char character[1] = {0x00,};
	int counter = 0;

	while((results = open("wyniki.txt", O_RDWR|O_CREAT|O_EXCL, 0711)) < 0)
	{

	}

	if(results != 0)
	{
		printf("SERWER:\n");
		while(1)
		{
			read(0,character,1);

			if(character[0] == (char)ESC)
			{
				write(results, bufor, counter);
				close(results);
				break;
			}
			bufor[counter] = character[0];
			counter++;
      unlink("lockfile");
      unlink("data.txt");
		}
	}
}


//Wywolywanie procedur
int main()
{
	printf("SERWER\n");

	while(1)
	{
		receive();
		send();
		printf("\n\n");
	}

	return 0;
}
