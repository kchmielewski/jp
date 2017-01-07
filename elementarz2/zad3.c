#include <stdio.h>

void print_table_header(char *header1, char *header2) {
  //print header
//  | liczba skladnikow | przyblizenie π |
//  | ----: | -----: |
}
// 3,14159 26535 89793
//przyblizenia_pi[] = {3.14, 3.141, 3.1415};
double leibniz(int n){
  double pi = 4;
  double dziel = 3;
  int znak = 1;

for (int i=0; i< n; i++, dziel += 2) {
  if (znak == 1){
    znak = -1;
}else{
    znak = 1;
  }
   pi += znak * (4 / dziel);
}
return pi;
}
int main() {
  int liczba_skladnikow[] = {0, 100, 1000, 1000000};

for (int i = 0; i < 4; i++){
printf("| %7d | %.20lf|\n", liczba_skladnikow[i], leibniz(liczba_skladnikow[i]));
  }
}
