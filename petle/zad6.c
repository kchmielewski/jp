#include <stdio.h>
  void elementy( double tablica[] ){
    int i;
    double max, min;
    for (i = 0; i <= 5; i++){
      printf("Podaj liczbę: ");
      scanf("%lf", &tablica[i]);
      if (tablica[i] < min)
    min = tablica[i];
  if (tablica[i] > max)
    max = tablica[i];
    }

    printf("%lf %lf\n", min, max);

  }
      int main() {
        double tablica[5];

        elementy(tablica);


      }
