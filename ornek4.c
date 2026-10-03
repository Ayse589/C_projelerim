#include <stdio.h>
int main()

{
    int sayi;
    int onlar, birler;
    printf("bir sayi giriniz:");
    scanf("%d", &sayi);
    onlar = (sayi / 10) % 10; //sayi%100 /10
    birler = sayi % 10;
    printf("onlar:%d birler:%d", onlar, birler);
}