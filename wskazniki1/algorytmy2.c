#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node *next;
    struct node *prev;
    int dane;
};

struct list{
    struct node *head;
    struct node *tail;
    int count;
};

void init(struct list *lista);
void push_front(int dane, struct list *lista);
void push_back(int dane, struct list *lista);
void insert(int pozycja, int dane, struct list *lista);
void pop_front(struct list *lista);
void pop_back(struct list *lista);
void print(struct list *lista);
void remove(int pozycja, struct list *lista);
void clear(struct list *lista);
int size(struct list *lista);
int isEmpty(struct list *lista);
node *begin(struct list *lista);
node *end(struct list *lista);

int main(int argc, char *argv[]) {
    struct list *wsk_list=(struct list*)malloc(sizeof(struct list));
    init(wsk_list);
    print(wsk_list);
    printf("\nbegin = %d\n", begin(wsk_list));
    printf("\nend = %d\n", end(wsk_list));
    size(wsk_list);
    return 0;
}

node *begin(struct list *lista)
{
    if(lista->head==NULL)
        puts("Brak wskaznika, lista jest pusta");
    else
        return lista->head;
}


node *end(struct list *lista)
{
    if(lista->head==NULL)
        puts("Brak wskaznika, lista jest pusta");
    else
        return lista->tail;
}
