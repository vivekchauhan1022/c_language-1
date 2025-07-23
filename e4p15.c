#include<stdio.h>

int main()
{
    int no,square;
    printf("n = n's square\n");
    for(no=1;no<=10;no++)
    {
        square=no*no;
        printf("%d = %d\n",no,square);
    }
    return 0;
}