#include <stdio.h>
int main(){
    char a;
    printf("Enter a letter\n");
    scanf(" %c",&a);
    switch (a)
    {
    case 'a':printf("It is a vowel"); break;
    case 'e':printf("It is a vowel"); break;
    case 'i':printf("It is a vowel"); break;
    case 'o':printf("It is a vowel"); break;
    case 'u':printf("It is a vowel"); break;
    
    default:printf("It is a consonent");
        break;
    }

}