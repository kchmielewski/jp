#include <stdio.h>
void prostokat(int szerokosc, int dlugosc){
int a, b;
  for (a = 0; a < szerokosc; a++)
    printf("* "); // gorna krawedz
    printf("\n");
  for (a = 0; a < dlugosc - 2; a++) {
    printf("*"); // lewa krawedz
  for (b = 0; b < szerokosc + 2; b++)
    printf(" "); // spacje zamiast gwiazdek
    printf(" *\n"); // prawa krawedz
}
  for (a = 0; a < szerokosc; a++)
    printf("* "); // dolna krawedz
    printf("\n");
}

int main() {
  prostokat(6, 10);
}
