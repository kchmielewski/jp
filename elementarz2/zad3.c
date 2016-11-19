#include <stdio.h>

int main() {
  double pi = 4;
  int x;
  double dziel = 3;
  int znak = 1;
scanf("%d/n", &x);
for(int i=0; i<x; i++)
  {
  if (znak==1)
    {
    pi = pi - ( 4 / dziel );
    znak = 0;

    }
  else
  {
    pi = pi + (4 / dziel);
    znak = 1;
  }
  dziel = dziel + 2;
}
printf("%f\n", pi);
return 0;
}
