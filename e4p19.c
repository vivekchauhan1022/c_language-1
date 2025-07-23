#include<stdio.h>

int main()
{
    int no,sum=0;
    printf("Odd numbers..\n");
    for(no=1;no<=10;no++)
    {
        if(no%2==1)
        {
            printf("%d\n",no);
            sum=sum+no;
        }
    }
    printf("sum of ODD number:%d",sum);
    return 0;
    
}