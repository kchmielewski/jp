#include <stdio.h>
int ref[] = {8, 4, -1, 2};
int *wsk, indeks, roznica;


void max_min(){
  int min = ref[0];
  int max = ref[0];
for (indeks = 0, wsk = ref; indeks < 4; indeks++, wsk++){
  if(ref[indeks]<min)
    min = ref[indeks];
  if(ref[indeks]>max)
    max = ref[indeks];
roznica = max - min;
  }
}

int main () {
max_min();
    printf("%d\n", roznica);
}
