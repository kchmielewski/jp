#include <stdio.h>
#include <ctype.h>

char* zwraca_wskaznik(char *wsk);

int main(void)
{
	char* napis = "    ala ma kota    ";
	printf("napis: \"%s\"\n", zwraca_wskaznik(napis));

	return 0;
}

char* zwraca_wskaznik(char *wsk)
{
	while(*wsk) if(!isspace(*wsk++)) break;
	return wsk-1;
}
