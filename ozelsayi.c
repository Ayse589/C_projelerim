#include <stdio.h>
int main()
{
    // abcd=(ab+cd)^2
    int sayi;
    printf("dort basamakli bir sayi griniz:");
    scanf("%d", &sayi);
    int a, b, c, d;
    a = sayi / 1000;
    b = (sayi / 100) % 10;
    c = (sayi / 10) % 10;
    d = sayi % 10;
    int ab = (a * 10) + b;
    int cd = (c * 10) + d;
    if (sayi == (ab + cd) * (ab + cd))
    {

        printf("sayi bir ozel sayidir");
    }
    else
    {
        printf("sayi bir ozel sayi degildir");
    }
    return 0;
}
// 9876

// kısa yoldan cozum
// part1 = (sayi / 100)
// part2=sayi%100
// yenitoplam=part1+part2
// if(sayi==yenitoplam)
