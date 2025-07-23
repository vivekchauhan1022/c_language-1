#include<stdio.h>

int main()
{
    int no,cube;
    printf("cube of 1 to 10 number..\n");
    for(no=1;no<=10;no++)
    {
        cube=no*no*no;
        printf("%d\n",cube);
    }
    return 0;
}