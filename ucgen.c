#include <stdio.h>
int main()
{
    int a, b, c;
    printf("ucgenin acilarini giriniz");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && a == c)
    {
        printf("eskaner ucgen");
    }
    else if (a == b && b != c || a != b && b == c || a == c && b != c)
    {
        printf("ikizkenar ucgen");
    }
    else
    {
        printf("cesitkenar");
    }
}