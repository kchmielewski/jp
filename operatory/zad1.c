#include <stdio.h>

#define MWG 60

int main(void)
{
  int minuty, godziny;

  printf("Podaj liczbe minut: \n");
  scanf("%d", &minuty);
  godziny=0;
  while ((minuty/MWG)>0)
  {
    godziny+=1;
    minuty-=MWG;
  }
  printf("%dh:%dm\n", godziny, minuty);

  return 0;
}
