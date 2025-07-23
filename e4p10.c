#include<stdio.h>

int main()
{
    int no,sum,n;

    printf("entr nutural number you wnat to sum of that number:");
    scanf("%d",&n);
    
    for(no=1;no<=n;no++)
    {
        sum=no+sum;  
    }
    printf("Sum of first n natural number:%d",sum);
    return 0;
}