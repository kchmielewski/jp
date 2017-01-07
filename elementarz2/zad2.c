#include <stdio.h>
int main() {
int n;
int i = 2;
  printf("Podaj liczbe calkowita: ");
  scanf("%d", &n);

    if(n%i == 0){
        printf("%d nie jest liczbą pierwszą\n", n);
    }

    else
  printf("'%d' jest liczbą pierwsza\n", n);


}
