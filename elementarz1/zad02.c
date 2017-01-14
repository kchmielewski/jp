#include <stdio.h>
int main() {
   int tabela[] = {1, 2, 4, 6, 12};
    int n = (sizeof tabela) / sizeof(int) - 1; 

   for (int i = n; i >= 0; i--) {

     printf("%d\n", tabela[i]);
   }
}
