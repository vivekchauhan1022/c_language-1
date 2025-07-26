#include<stdio.h>

int main()
{
    int choice,min;
    printf("enter array size:");
    scanf("%d",&choice);
    int arr[choice];

    for(int i=1;i<=choice;i++)
    {
        printf("enter number:");
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(int i=1;i<=choice;i++)
    {
        
        if(arr[i]<=min)
        {
            min=arr[i];
        }
         printf("%d ",arr[i]);
    }
    printf("\nMinimum number is : %d",min);
    return 0;
}