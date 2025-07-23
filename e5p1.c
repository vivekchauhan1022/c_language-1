#include<stdio.h>

int main()
{
    int row,column,space;

    for(row=1;row<=5;row++)
    {
        for(space=2;space<=2-row;space++)
        {
            printf(" ");
        }
        for(column=5;column>=1;column++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}