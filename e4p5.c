#include<stdio.h>

int main()
{
    int no,mul,table;

    printf("enter numbe you want to print table:");
    scanf("%d",&no);

    for(mul=1;mul<=10;mul++)
    {
        table=no*mul;
        printf("%d * %d = %d\n",no,mul,table);
    }
    return 0;
}