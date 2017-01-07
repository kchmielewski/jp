#include <stdio.h>
int main() {
  int a, b;
    printf("Wpisz liczbę całkowita: ");
    scanf("%d", &a);
    printf("Wpisz drugą, większą liczbę całkowitą: ");
    scanf("%d", &b);
  if (a >= b)
    printf("Pierwsza liczba jest większa od drugiej, błąd\n");

  else
    for (a = a + 1; a < b; a++){
      printf("%d\n", a);
  }
}
