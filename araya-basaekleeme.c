#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* createnode(int x) {
    struct node* item = (struct node*)malloc(sizeof(struct node));
    item->next = NULL;
    item->data = x;
    return item;
}

void basaekle(struct node** head, int y) {//{Amaç: Listenin baþýna yeni düðüm ekleme
    struct node* yeni = createnode(y);
    yeni->next = *head;
    *head = yeni;
}
//Not: head pointer’ýnýn adresini (struct node **) almasýnýn sebebi,
// fonksiyonun listenin baþýný gerçekten deðiþtirebilmesidir.

void arayaekle(struct node* head, int x, int y) {
    struct node* temp = head;

    // y deðerini içeren düðümü bul
    while (temp != NULL && temp->data != y) {
        temp = temp->next;
    }

    if (temp == NULL) return; // y yoksa hiçbir þey yapma

    struct node* yeni = createnode(x);
    yeni->next = temp->next;
    temp->next = yeni;
}

int main() {
    struct node* head = NULL;
    basaekle(&head, 45);
    basaekle(&head, 34);

    // y=34 bulunduðu için 34'ten sonra x=66 ekleyecek (örnek)
    arayaekle(head, 66, 34);

    for (struct node* t = head; t != NULL; t = t->next) {
        printf("%d\t", t->data);
    }

    struct node* t = head;
    while (t != NULL) {
        struct node* sonraki = t->next;
        free(t);
        t = sonraki;
    }
    //sonraki = t->next; önce alýnýr çünkü free(t) yapýldýktan sonra t->next eriþilemez olur.
    return 0;
}
