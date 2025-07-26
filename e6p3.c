#include<stdio.h>

int main()
{
    int choice,average,total=0;
    printf("enter size of array:");
    scanf("%d",&choice);
    int arr[choice];

    for(int i=1;i<=choice;i++)
    {
        printf("enter the element:");
        scanf("%d",&arr[i]);

        total=total+arr[i];
    }
    average=total/choice;
    for(int i=1;i<=choice;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nAverage is = %d",average);
    return 0;
}