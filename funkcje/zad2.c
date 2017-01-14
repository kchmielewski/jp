#include <stdio.h>
#include <stdlib.h>

int silnia(int d) {
  int silnia=1;
  if (d<0){
    printf("Błąd, nie można obliczyć silni z liczby ujemnej\n");
    exit(1);    }
    else {
      for (int p = 1; p <= d; p++)
      silnia*=p;
    }
    return silnia;
  }



  int main() {
    int d;
    for(d = 1; d <= 10; d++){
    printf("%2d %7d\n", d, silnia(d));}


  }
