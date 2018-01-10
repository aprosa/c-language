#include <stdio.h>
int main()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;

    do {
        printf("Enter an alphabet: ");
        scanf(" %d", &d);
    }
    
    while (!isalpha(c));

    isLowercaseVowel = (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u');
isUppercaseVowel = (d == 'A' || d == 'E' || d == 'I' || d == 'O' || d == 'U');
if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
