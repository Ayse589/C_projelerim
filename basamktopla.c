#include <stdio.h>
int main()
{
    int binler, birler, yuzler, onlar, mynumber, toplam = 0;
    printf("4 basamaklı bir sayi giriniz");
    scanf("%d", &mynumber);
    binler = mynumber / 1000;
    yuzler = (mynumber / 100) % 10;
    onlar = (mynumber / 10) % 10;
    birler = (mynumber % 10);
    toplam += birler + binler + yuzler + onlar;

    printf("toplam : %d", toplam);

    /*
    while (sayi > 0) {
kalan = sayi % 10; // Kalan = son basamak
toplam = toplam + kalan;
sayi = sayi / 10; // Bölüm = son basamağı at
    */

    return 0;
}