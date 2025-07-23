#include<stdio.h>

int main()
{
    int a,b,c,sum;

    printf("enter triangle side A:");
    scanf("%d",&a);
    printf("enter triangle side B:");
    scanf("%d",&b);
    printf("enter triangle side C:");
    scanf("%d",&c);
    sum=a+b+c;

    if(a==60 && b==60 && c==60)
    {
        printf("triangle is Equlateral..");
    }
    else if((a==b)||(b==c)||(c==a) && sum==180)
    {
        printf("triangle is Isosceles..");
    }
    else if((a!=b)||(b!=c)||(c!=a) && sum==180)
    {
        printf("triangle is Scalene..");
    }
    else
    {
        printf("triangle inequality fails..");
    }
    return 0;

}