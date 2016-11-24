#include <stdio.h>
int even(int k){
  return k % 2 == 0;
}

void print_line(int p, int len) { // p - parzyste lub nieparzyste
const char *klocek0 = "* ";
const char *klocek1 = " *";
const char *klocek = "*";

const char *pattern = even(p) ? klocek0 : klocek1;

  for (int y = 0; y < len - 1; y++)
    printf("%s", pattern);
    printf("%s", even(p) ? klocek : klocek1);


  printf("|\n");
}
int main() {
  for (int x=0;x<8;x++)
    print_line(x, 16);
}
