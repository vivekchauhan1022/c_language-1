#include<stdio.h>

int main()
{
    int choice,sum=0;
    printf("enter your choice for array size:");
    scanf("%d",&choice);
    int arr[choice];

    for(int i=1;i<=choice;i++)
    {
        printf("enter element:");
        scanf("%d",&arr[i]);

        sum=sum+arr[i];
    }

    for(int i=1;i<=choice;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nsum is=%d",sum);
    return 0;
}