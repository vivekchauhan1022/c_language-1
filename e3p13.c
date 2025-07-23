#include<stdio.h>

int main()
{
    int age;

    printf("enter the age:");
    scanf("%d",&age);

    if(age<5)
    {
        printf("Free entry..");
    }
    else if(age>=5 && age<=12)
    {
        printf("Child ticket ₹50..");
    }
    else if(age>=13 && age<=60)
    {
        printf("Adult ticket ₹120..");
    }
    else
    {
        printf("Senior ticket ₹80..");
    }
    return 0;
}