#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    fflush(stdin);
    while(n--)
    {
    char c;
    scanf("%c",&c);
    fflush(stdin);
    if(isalpha(c))
    printf("alpha\n");
    else if(isdigit(c))
    printf("digit\n");
    else
    printf("special\n");
    }
    return 0;
}