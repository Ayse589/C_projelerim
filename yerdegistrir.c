#include <stdio.h>
int main()
{
    int a[6];
    int *p1, *p2;
    printf("dizinin elemanlarini giriniz: ");
    for (p1 = a; p1 < a + 6; p1++)
    {
        scanf("%d", p1);
    }
    printf("dizinin normal hali:\n");
    for (p1 = a; p1 < a + 6; p1++)
    {
        printf("%d\n", *p1);
    }

    for (p1 = a, p2 = a + 5; p1 < p2; p1++, p2--)
    {
        int temp;
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
    printf("dizimizin elemanlari yer degistridkten sonraki hali:\n");
      for (p1 = a; p1 < a + 6; p1++)
    {
        printf("%d\n",*p1);
    }
}

