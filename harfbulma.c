#include <stdio.h>
int main()
{

    char myCharacter;
    printf("bir karakter giriniz");
    scanf("%c", &myCharacter);
    if (myCharacter >= 'A' && myCharacter <= 'Z')
    {
        printf("%c  is uppercase");
    }
    else if (myCharacter >= 'a' && myCharacter <= 'z')
    {
        printf("%c is lowercase");
    }
    else
        printf("%c is not a letter");
}