#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE(x) (sizeof(x)/sizeof(x[0]))

int main(void)
{
 	int tab[512];
 	int i;

 	for(i=0; i < ARRAY_SIZE(tab); ++i) tab[i] = 128;

 	return 0;
}
