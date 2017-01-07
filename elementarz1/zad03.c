#include <stdio.h>
int main() {
   int tabela[] = {1, 2, 4, 6, 12, 15};
   int n = (sizeof tabela) / sizeof(int);
   int i;

  printf("rozmiar tabela= %d\n", n);
  i = n;
    while (i >= 0) {
      i--;
      printf("%d\n", tabela[i]);
    }
}
