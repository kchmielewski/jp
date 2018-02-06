#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE(x) (sizeof(x)/sizeof(x[0]))

int main(void)
{
 	int tab[512];
 	int i;

<<<<<<< HEAD
 	for(i=0; i < ARRAY_SIZE(tab); ++i) tab[i] = 128;

 	return 0;
=======
 	for(i=0; i < ARRAY_SIZE(tab); i++) {tab[i] = 128;}

  for(i = 0; i <ARRAY_SIZE(tab); i++)
  printf("%d\n", tab[i]);
>>>>>>> 8036cd0fca82c252570a38a0a66746779174b8e2
}
