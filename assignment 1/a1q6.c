#include<stdio.h>
int main()
{
    char s[100];
    printf("Enter your name: ");
    gets(s);
    printf("\"Hello, %s\"",s);
    return 0;
}