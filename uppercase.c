#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c is upper case letter\n",ch);
    }
    else{
        printf("%c is not a uppercase letter\n",ch);
    }
    return 0;
}