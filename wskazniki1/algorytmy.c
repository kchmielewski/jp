#include<stdio.h>
#include<stdlib.h>

struct lista
{
    int number;
    struct lista *nastepny;
    struct lista *poprzedni;
};

typedef struct lista wsk;
wsk *head=NULL, *tail=NULL;

wsk* nowyWskaznik(int val);
void dodaj_na_koniec(int value);
void printujListe();
void przenies_koniec_na_poczatek();
int main()
{
    int d = 23, e = 12, f = 66, g = 99, h =65, i = 20, j = 8;




    printf("Dodano na koniec: %d, %d, %d, %d, %d, %d  \n", d, e, g, h, i, j);
    dodaj_na_koniec(d);
    dodaj_na_koniec(e);
    dodaj_na_koniec(g);
    dodaj_na_koniec(h);
    dodaj_na_koniec(i);
    dodaj_na_koniec(j);

    printujListe();

    przenies_koniec_na_poczatek();

    printujListe();
    przenies_koniec_na_poczatek();
    printujListe();
    return 0;
}

//create a new node and returns to caller
wsk* nowyWskaznik(int val)
{
    wsk *temp_wsk;
    temp_wsk = (wsk *) malloc(sizeof(wsk));
    temp_wsk->number=val;
    temp_wsk->nastepny=NULL;
    temp_wsk->poprzedni=NULL;

    return temp_wsk;
}

void dodaj_na_koniec(int value)
{
  wsk  *newWsk = nowyWskaznik(value);

    if(head==NULL) //Dla pierwszego elementu
    {
        head=newWsk;
        tail=newWsk;
        return;
    }

    tail->nastepny = newWsk;
    newWsk->poprzedni= tail;
    tail = newWsk;
}

void przenies_koniec_na_poczatek(){

wsk *koniec;
koniec = tail;

            head->poprzedni = koniec;
            koniec->nastepny = head;
            tail = tail->poprzedni;
            head = koniec;

    }

void printujListe()
{
    printf("\nYour updated linked list in FORWARD ORDER:\n");

    wsk *poczatek;
    poczatek = head;

    while(1)
    {
        if(head==NULL || tail==NULL) break;

        printf("%d ", poczatek->number);

        if(poczatek==tail) break;

        poczatek = poczatek->nastepny;

    }
    puts("\n");
}
