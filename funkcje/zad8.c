#include<stdio.h>
#include<stdlib.h>
#include<time.h>
  int random_number(int min_num, int max_num);
  void zgadywanie();
    int main(void) {
      zgadywanie();
}

void zgadywanie(){
int a = random_number(1,1000);
int x = 0;
int podana_liczba = 0;
    while(x <= 1000){
      printf("Zgadnij liczbę z przedziału od 1 do 1000: \n");
      scanf("%d", &podana_liczba);
    if(podana_liczba < a){
      printf("Podałeś za małą liczbę, spróbuj jeszcze raz: \n");
      x++;
    }
    if(podana_liczba > a){
      printf("Podałeś za dużą liczbę, spróbuj jeszcze raz: \n");
      x++;
    }
    if(podana_liczba == a){
      x = 1001;
      printf("Brawo, odgadłeś liczbę!\n");
    }
  }
}
int random_number(int min_num, int max_num)
{
    int result=0,low_num=0,hi_num=0;
    if(min_num<max_num)
    {
        low_num=min_num;
        hi_num=max_num+1; // this is done to include max_num in output.
    }else{
        low_num=max_num+1;// this is done to include max_num in output.
        hi_num=min_num;
    }
    srand(time(NULL));
    result = (rand()%(hi_num-low_num))+low_num;
    return result;
}
