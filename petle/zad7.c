#include <stdio.h>

int zlicz_dodatnie(double tab[], int size){
  int dod = 0;
  double liczba;

  for (int i = 0; i <= 6; i++){
    printf("Podaj liczbę: ");
    scanf("%lf", &liczba);
    if (liczba > 0)
    dod+=1;
  }
  return dod;
}
  void wczytaj_6(double tab[]){
//
  }
  void wypisz_wynik(int k){
    printf("Liczba liczb dodatnich: %d\n", k);
  }
int main() {
  double tablica[6];
  //int ile_dodatnich;

  wczytaj_6(tablica);
//  ile_dodatnich = zlicz_dodatnie(tablica, 6);
  wypisz_wynik(zlicz_dodatnie(tablica, 6));
}
