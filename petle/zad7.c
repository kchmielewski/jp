#include <stdio.h>
  void elementy( double tablica[] ){
    int i;
    int dod;
    for (i = 0; i <= 5; i++){
      printf("Podaj liczbę: ");
      scanf("%lf", &tablica[i]);
      if (tablica[i] > 0)
        dod+=1;
}
printf("Ilość liczb dodatnich: %d\n", dod);
  }
      int main() {
        double tablica[6];

        elementy(tablica);


      }
