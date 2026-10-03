#include <stdio.h>
int main()
{
    int sayi, yenisayi, part1, part2;
    printf("dort basamkli bir sayi girin ");
    scanf("%d", &sayi);
    part1 = (sayi / 100);
    part2 = (sayi % 100);
    yenisayi = (part1 + part2)*(part1+part2);
    if (sayi == yenisayi){
        printf("sayi bir ozel sayidir");}
    else{
        printf("sayi bir ozel sayi degildir");}
}