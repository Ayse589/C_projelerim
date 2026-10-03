#include<stdio.h>
int main(){
    int sayi1,sayi2,sayi3,sayi4;
    float ortalama=0.0;
    int toplam=0;
    printf("dort adet sayi giriniz:");
    scanf("%d %d %d %d",&sayi1,&sayi2,&sayi3,&sayi4);

    toplam=sayi1+sayi2+sayi3+sayi4;
    ortalama=(float)toplam/4;
    printf("ortalama: %f",ortalama);
}    