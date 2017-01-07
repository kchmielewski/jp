#include <stdio.h>

long odwrot_liczby(long y) {
   static long x = 0;

   if (y == 0)
      return 0;

   x *= 10;
   x += y % 10;
   odwrot_liczby(y/10);
   return x;

}

int main()
{
   long y, x;
   printf("Podaj liczbę, a wypiszę ci jej odwrotność: ");
   scanf("%ld", &y);

   x = odwrot_liczby(y);

   printf("%ld\n", x);

   return 0;
}
