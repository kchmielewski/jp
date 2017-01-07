#include <stdio.h>
int main() {
  int suma = 0;
  int M = 0 ;

  int i = 0;
  printf("Podaj liczbe M: \n");
  scanf("%d", &M);

  while (suma + i < M) {
     suma = suma + i;
     i = i + 1;
  }
  int n = i;
  printf("Szukane n to: %d\n", n);
  return 0;
}
