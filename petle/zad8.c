#include <stdio.h>
void rysowanie();
int wzor(int x, int y);
int x = 1, j = 0, i;

int main() {
rysowanie();
}

int wzor(x, y) {
  int i = 0;

  while(i < x) {
    if (y%2 == 0)
      putchar('*');
    else
      putchar(' ');
    i++;
  }
  return 0;
}
void rysowanie(){
  while (j <= 3) {
    int tab[7] = {x, 8-x, 5-x, (x+1)*2, tab[2], tab[1], x};
    i = 0;
    while (i <= 6) {
      wzor(tab[i], i);
      i++;
    }
    printf("\n");
    x++;
    j++;
  }
  return 0;
}
