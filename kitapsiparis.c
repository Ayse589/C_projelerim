#include<stdio.h>
int main(){
    int kitapfiyati,siparissayisi;
    float indirimorani,indirimsizfiyat,indirimlifiyat,toplam;
    kitapfiyati=20;
    siparissayisi=0;
    printf("siparis sayisi:");
    scanf("%d",&siparissayisi);
     
    if(siparissayisi>40)
    indirimorani=0.4;
    else if(siparissayisi<40&& siparissayisi>20)
    indirimorani=0.3;
    else if(siparissayisi<20)
    indirimorani=0.2;

    indirimlifiyat=(kitapfiyati*siparissayisi)*indirimorani;
    indirimsizfiyat=kitapfiyati*siparissayisi;
    printf("indirimlifiyat: %f",indirimlifiyat);
    printf("indirimsizfiyat:%f",indirimsizfiyat);
    toplam=indirimsizfiyat-indirimlifiyat;
    printf("toplam:%f",toplam);



}