#include <stdio.h>

int main () {
  int ref[] = {8, 4, 1, 2};
  int *wsk;
  int indeks;
  int min = ref[0];
  int max = ref[0];
  for (indeks = 0, wsk = ref; indeks < 4; indeks++, wsk++){
    if(ref[indeks]<min)
      min = ref[indeks];
    if(ref[indeks]>max)
      max = ref[indeks];
    }
    printf("%d %d\n", min, max);
}
