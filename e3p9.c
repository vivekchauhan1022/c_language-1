#include<stdio.h>

int main()
{
    int unit,bill;

    printf("Enter total unit consumed:");
    scanf("%d",&unit);

    if(unit<=100)
    {
        bill=unit*2;
        printf("total bill is:%d",bill);
    }
    else if(unit>=101 && unit<=300)
    {
        bill=unit*3;
        printf("total bill is:%d",bill);
    }
    else if(unit>=301 && unit<=500)
    {
        bill=unit*5;
        printf("total bill is:%d",bill);
    }
    else
    {
        bill=unit*8;
        printf("total bill is:%d",bill);
    }
    return 0;
}