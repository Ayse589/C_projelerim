#include<stdio.h>
int main(){
    int sayi;
    while(1){
    printf("sayi gir:(cikmak icin 0)");
    
    scanf("%d",&sayi);
    if (sayi==0)
    break;
    if(sayi%2==0)
    printf("sayi cift");
    else
    printf("sayi tek");
    }
}