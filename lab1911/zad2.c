#include <stdio.h>
int main() {
  int x,y;

  for (x=0;x<8;x++){
    if (x%2==0) {
      for (y = 0; y < 8; y++) {
        printf("* ");
      }
    }
    else {
      for (y = 0; y < 8; y++) {
        printf(" *");
      }
    }
    printf("\n");
  }
}
