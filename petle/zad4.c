#include <stdio.h>
#include <stdlib.h>

int suma(int d) {
  int suma=0;
  if (d<1){
    printf("Błąd, podałeś liczbę mniejszą niż 1\n");
    exit(1);    }
    else {
      for (int p = 0; p <= d; p++)
      suma+=p;
    }
    return suma;
  }

  int main() {
    int d;
    printf("Wpisz liczbę większą od 1: ");
    scanf("%d", &d);
    printf("%d\n", suma(d));
  }
