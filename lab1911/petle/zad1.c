#include <stdio.h>
int main() {
    int pot=1;
    while (pot<2010) {
        printf("%d\n", pot);
        pot *= 2;
    }
    return 0;
}
