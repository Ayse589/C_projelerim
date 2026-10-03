#include<stdio.h>
int main(){
    int sayi1,sayi2;
    printf("iki sayi giriniz:");
    scanf("%d %d",&sayi1,&sayi2);
    if(sayi1>sayi2)
    printf("sayi1>sayi2");
    else if(sayi1<sayi2)
    printf("sayi1<sayi2");
    else
    printf("sayi1=sayi2");
}