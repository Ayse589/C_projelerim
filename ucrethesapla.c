#include <stdio.h>
#include <stdlib.h>
int main()
{
    int konusmaSuresi;
    float dakikalikucret, toplamucret;

    printf("kac dk gorusme yapildiğini girniz:");
    scanf("%d", &konusmaSuresi);

    if (konusmaSuresi <= 4)
    {
        dakikalikucret= 0.3;
    }
    if (konusmaSuresi > 4)
    {
dakikalikucret=0.3+(konusmaSuresi - 4) * 0.07;
    }
    toplamucret = dakikalikucret;
    printf("toplam ucret miktari: %f", toplamucret);

    return 0;
}