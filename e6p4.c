#include<stdio.h>

int main()
{
    int choice,max=0;
    printf("enter size of array:");
    scanf("%d",&choice);
    int arr[choice];

    for(int i=1;i<=choice;i++)
    {
        printf("enter the number:");
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        {
            max=arr[i]; 
        }
    }
    for(int i=1;i<=choice;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nMaximum number is : %d",max);
    return 0;
 }