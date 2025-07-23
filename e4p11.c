#include<stdio.h>

int main()
{
    int fact=1,no,i;

    printf("enter number for FACTORIAL:");
    scanf("%d",&no);

    for(i=no;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("FCTORIAL no is:%d",fact);
    return 0;
}