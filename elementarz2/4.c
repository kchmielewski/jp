#include <stdio.h>

int main() {
  double pi=4;
  int n;
  scanf("%d\n",&n);
  int znak=1;
  double mianownik=3;
  for(int i=0; i<n; i++)
  {
    if(znak==1)
    {
      pi=pi-(4/mianownik);
      znak=0;
    }
    else
    {
      pi=pi+(4/mianownik);
      znak=1;
    }

    mianownik=mianownik+2;

  }
  printf("%f\n", pi);
  return 0;
}
