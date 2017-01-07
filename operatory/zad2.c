#include <stdio.h>

#define week 7

int main(void)
{
  int tygodnie, dni;


  printf("Podaj liczbe dni: \n");
  scanf("%d", &dni);
  tygodnie = 0;
  while ((dni/week)>0)
  {
    tygodnie+=1;
    dni-=week;
  }
  printf("%dw:%dd\n", tygodnie, dni);
  return 0;
}
