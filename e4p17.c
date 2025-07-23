#include<stdio.h>

int main()
{
    char name;
    printf("enter name:");
    scanf("%c",&name);

    for(int i=1;i<=10;i++)
    {
        printf(" %c\n",name);
    }
    return 0;
}