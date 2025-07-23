#include<stdio.h>

int main()
{
    int user=12345,user1,pass=9999,pass1;

    printf("enter five digit username:");
    scanf("%d",&user1);
    printf("enter four digit password:");
    scanf("%d",&pass1);

    if(user1==user && pass1!=pass)
    {
        printf("Incorrect Password..");
    }
    else if(user1!=user && pass1==pass)
    {
        printf("Invalid User..");
    }
    else if(user1!=user && pass1!=pass)
    {
        printf("Both are wrong..");
    }
    else
    {
        printf("Loging Sucsessfully..");
    }
    return 0;
    
}