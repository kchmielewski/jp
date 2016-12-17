#include <stdio.h>
#include <math.h>
void prostokat(int szerokosc, int dlugosc);
void strzalka(int width, int lenght);

int main() {
  prostokat(6, 10);
  printf("\n");
  strzalka(5, 4);
  printf("\n");
}
// funkcje: prostokat, romb, strzalka, diament
//dlugosc -- wysokosc promienia strzalki
// width must be odd number
static void grot(int width){
 for(int a = 0; a < width; a+=2){

    for(int c = (width-a)/2;c >= 0; c--)

    {

      printf(" ");

    }

    for(int b = 0; b <= a; b++)
    {
      printf("*");

    }
    printf("\n");
  }
  }
static void promien(int height, int margin){
  for (int a = 0; a < height; a++) {
  for (int b = 0; b < margin; b++)
    printf(" ");
    printf(" *\n"); //promien
  }
}
void strzalka(int width, int lenght){
  grot(width);
  int left_margin = width / 2;
  promien(lenght, left_margin);
}
//funkcje pomocnicze

void krawedz_pozioma(int width) {
  for (int a = 0; a < width; a++)
    printf("* ");
    printf("\n");

}
static void krawedzie_poziome(int width, int height){
  for (int a = 0; a < height - 2; a++) {
    printf("*"); // lewa krawedz
  for (int b = 0; b < width + 2; b++)
    printf(" "); // spacje zamiast gwiazdek
    printf(" *\n"); // prawa krawedz
}
}
//funckcje eksportowane
void prostokat(int szerokosc, int dlugosc){

krawedz_pozioma(szerokosc); // górna
krawedzie_poziome(szerokosc, dlugosc); //lewa i prawa
krawedz_pozioma(szerokosc); //dolna
}
