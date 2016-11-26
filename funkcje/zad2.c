#include <stdio.h>
#include<math.h>
int sumowanie(int d) {
  int s=0;
  int j=1;
    if (d<j){
      printf("Błąd, podałeś liczbę mniejszą niż ");
return j;    }
    else {
      for (int p = 0; p <= d; p++)
      s+=(p)*s;
    }
    return s;
}

int main() {
  int d;
  printf("Wpisz liczbę większą od 1: ");
    scanf("%d", &d);
  printf("%d\n", sumowanie(d));
}
