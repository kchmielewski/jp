#include <stdio.h>
#include <ctype.h>

char* zwraca_wskaznik(char *str);

int main(void)
{
	char* napis = "    ala ma kota    ";
	printf("napis: \"%s\"\n", zwraca_wskaznik(napis));

	return 0;
}

char* zwraca_wskaznik(char *str)
{
	while(*str) if(!isspace(*str++)) break;
	return str-1;
}
