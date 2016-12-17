#include <stdio.h>
//unsigned- żeby było liczbą dodatnią
int wd(int n, int k);

int main() {
    printf("wd(6, 2) =  %d\n", wd(6, 2));
    printf("wd(5, 0) =  %d\n", wd(5, 0));
    printf("wd(5, 5) =  %d\n", wd(5, 5));
    printf("wd(49, 6) =  %d\n", wd(49, 6));
    printf("wd(100, 20) =  %d\n", wd(100, 20));


}
int wd(int n, int k){
  if (k == 0 || k == n)
    return 1;
  else
    return wd(n - 1, k - 1) + wd(n - 1, k);
}
