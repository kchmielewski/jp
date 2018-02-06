#include <stdio.h>
#include <ctype.h>

<<<<<<< HEAD
char* zwraca_wskaznik(char *str);
=======
char* zwraca_wskaznik(char *wsk);
>>>>>>> 8036cd0fca82c252570a38a0a66746779174b8e2

int main(void)
{
	char* napis = "    ala ma kota    ";
<<<<<<< HEAD
	printf("napis: \"%s\"\n", zwraca_wskaznik(napis));
=======
	printf("napis:%s\n", zwraca_wskaznik(napis));
>>>>>>> 8036cd0fca82c252570a38a0a66746779174b8e2

	return 0;
}

<<<<<<< HEAD
char* zwraca_wskaznik(char *str)
{
	while(*str) if(!isspace(*str++)) break;
	return str-1;
=======
char* zwraca_wskaznik(char *wsk)
{
	while(*wsk) if(!isspace(*wsk++)) break;
	return wsk-1;
>>>>>>> 8036cd0fca82c252570a38a0a66746779174b8e2
}
