//C Program to Check Whether a Character is Vowel or Consonant 
#include<stdio.h>

int main() {
    char ch;
    printf("enter a character:");
    scanf("%c" ,&ch);

    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' ||
        ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
        printf("The character %c is a vowel.\n", ch);
    } else {
        printf("The character %c is a consonant.\n", ch);
    }

    return 0;
}
