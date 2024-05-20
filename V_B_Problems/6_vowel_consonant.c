#include<stdio.h>

void main()
{
    char ch;
    printf("Enter a character: \n");
    scanf("%c",&ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    printf("Enter character is vowel\n");
    else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    printf("Enter character is vowel\n");
    else if(ch >= '1' && ch <= '9')
    printf("entered character is numnber\n");
    else
    printf("Consonant\n");
    
}