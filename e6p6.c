#include<stdio.h>

int main()
{
    int choice,count1=0,count=0;
    printf("enter size of array:");
    scanf("%d",&choice);
    int arr[choice];

    for(int i=1;i<=choice;i++)
    {
        printf("enter number :");
        scanf("%d",&arr[i]);
    }
    printf("\neven number.....\n");
    for(int i=1;i<=choice;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
            count=count+arr[i];
        }
    }
    printf("\ncount of even number is : %d",count);
    printf("\nodd number.....\n");
    for(int i=1;i<=choice;i++)
    {
        if(arr[i]%2==1)
        {
            printf("%d ",arr[i]);
            count1=count1+arr[i];
        }
        
    }
    printf("\ncount of odd number is : %d",count1);
    
}