#include <stdio.h>

void liczby_doskonale(){
  int przedzial,j;
  int suma = 0;

  for(przedzial = 2; przedzial<35000000; przedzial++)
  {
     for(j = 1; j<przedzial; j++)
     {
        if(przedzial%j==0) {
          suma+=j;}
     }

     if (suma==przedzial) {
       printf("%d \n", przedzial); }
       suma = 0;
  }

}

int main() {

liczby_doskonale();
}
