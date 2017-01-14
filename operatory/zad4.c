#include <stdio.h>
#include <stdlib.h>
int main() {
  int liczba1, liczba2;
  int wynik = 0;
    printf("Podaj liczbę całkowitą: \n");
    scanf("%d", &liczba1);
    printf("Podaj drugą, większą liczbę całkowitą: \n");
    scanf("%d", &liczba2);

  for(int x = liczba1; x <= liczba2 ; x++)
  {
    wynik += x*x;
  }
  printf("Suma kwadratów liczb od %d do %d = %d\n", liczba1, liczba2, wynik );
}
