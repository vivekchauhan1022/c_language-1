#include<stdio.h>

int main()
{
    int choice;
    printf("enter size of array:");
    scanf("%d",&choice);
    int element[choice];

    for(int i=1;i<=choice;i++)
    {
        printf("enter element :");
        scanf("%d",&element[i]);
    }
    for(int i=1;i<=choice;i++)
    {
        printf("%d ",element[i]);
    }
    return 0;
}