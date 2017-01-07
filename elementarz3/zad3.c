#include <stdio.h>
#include <math.h>
void trojkaty_pitagorejskie(){
for(int pierwszy_bok=1;pierwszy_bok<=334;pierwszy_bok++){

  for(int drugi_bok=pierwszy_bok;drugi_bok<=501;drugi_bok++){

for (int trzeci_bok=drugi_bok; pierwszy_bok+drugi_bok+trzeci_bok <= 1000; trzeci_bok++){

  if(pierwszy_bok*pierwszy_bok + drugi_bok*drugi_bok==trzeci_bok*trzeci_bok){

  printf("%d\t%d\t%d\n", pierwszy_bok, drugi_bok, trzeci_bok);
        }
      }
    }
  }
}


int main() {
trojkaty_pitagorejskie();


}
