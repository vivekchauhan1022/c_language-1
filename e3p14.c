#include<stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,total,per,grade;

    printf("enter subject mark:");
    scanf("%d",&m1);
    printf("enter subject mark:");
    scanf("%d",&m2);
    printf("enter subject mark:");
    scanf("%d",&m3);
    printf("enter subject mark:");
    scanf("%d",&m4);
    printf("enter subject mark:");
    scanf("%d",&m5);

    total=m1+m2+m3+m4+m5;
    printf("total is:%d \n",total);

    per=total/5;
    printf("percentage is:%d \n",per);

    if(per>=90)
    {
    printf("\nA+ grade..");
    }
    else if(per>=80 && per<=89)
    {
        printf("\nA grade..");
    }
    else if(per>=70 && per<=79)
    {
        printf("\nB grade..");
    } 
    else if(per>=60 && per<=69)
    {
        printf("\nC grade..");
    }
    else if(per>=50 && per<=59)
    {
        printf("\nD grade..");
    }    
    else
    {
        printf("\nFAIL..");
    }
    return 0;
} 