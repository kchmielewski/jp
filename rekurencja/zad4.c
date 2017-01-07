#include <stdio.h>
int nwd(int a, int b);
int main() {
  int pierwsza, druga;
  printf("Podaj pierwszą liczbę: ");
  scanf("%d", &pierwsza);
  printf("Podaj drugą liczbę: ");
  scanf("%d", &druga);
printf("NWD(%d, %d) = %d\n",pierwsza, druga, nwd(pierwsza, druga));

}

int nwd(int a,int b)
{
    int c;
    while(b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
