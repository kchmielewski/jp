#include <stdio.h>
#include <math.h>
void przeciwprostokatna(){
  double a, b;
  double c = 0;

  printf ("Podaj długość boku trójkąta: ");
  scanf ("%lf", &a);
  printf ("Podaj długość drugiego boku trójkąta: ");
  scanf ("%lf", &b);

c=sqrt(a*a+b*b);
printf ("%lf %lf %lf\n", a, b, c);
}

int main() {
przeciwprostokatna();
}
