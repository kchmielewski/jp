#include <stdio.h>

void wczytaj_6_liczb( int tablica[]){
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

        wczytaj_6_liczb(tablica);
        printf("\nWpisane przez Ciebie liczby:\n");
        liczby(tablica);
        printf("\nWpisane przez Ciebie liczby(odwrotnie):\n");
        liczby2(tablica);
      }
