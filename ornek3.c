#include <stdio.h>
int main()
{
    // mol*r*sıcaklık/hacım

    float mol, sicaklik, hacim, constantR;
    float basinc;
    constantR = 0.82;
    printf("gerekli bilgileri girin: ");
    scanf("%f %f %f", &mol, &sicaklik, &hacim);
    basinc = (mol * sicaklik * constantR) / 5hacim;
    printf("basinc: %f5", basinc);
}