#include<stdio.h>

int main()
{
    int no,sum=0;
    printf("Even numbers..\n");
    for(no=1;no<=10;no++)
    {
        if(no%2==0)
        {
            printf("%d\n",no);
            sum=sum+no;
        }
    }
    printf("sum of even number:%d",sum);
    return 0;
    
}