#include<stdio.h>
int main(){
    int toplam,sayi;
    printf("sayi gir:");
    scanf("%d",&sayi);
     while(sayi!=0){
        toplam+=sayi%10;
        sayi/=10;
     }
     printf("toplam: %d",toplam);
}