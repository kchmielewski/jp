#include <stdio.h>

void elementy( int tablica[] ){
  int i;
  for (i = 0; i <= 5; i++){
    printf("Podaj liczbę: ");
    scanf("%d", &tablica[i]);}
  }
  void liczby2(int tablica[]){
    int i;
    for (i = 5; i >= 0; i--){
      printf("liczba numer %d = %d\n", i, tablica[i]);}
    }
    void liczby(int tablica[]){
      int i;
      for (i = 0; i <= 5; i++){
        printf("liczba numer %d = %d\n", i, tablica[i]);}
      }
      int main() {
        int tablica[5];

        elementy(tablica);
        printf("\nPodales nastepujace liczby:\n");
        liczby(tablica);
        printf("\nPodales nastepujace liczby(odwrotnie):\n");
        liczby2(tablica);
      }
