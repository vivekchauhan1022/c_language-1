#include<stdio.h>

int main()
{
    int date,month;

    printf("enter birth date:");
    scanf("%d",&date);
    printf("enter birth month:");
    scanf("%d",&month);

    if(date>=21 && date<=31 && month==3 || date<=19 && date>=1 && month==4)
    {
        printf("ARIES");
    }
    else if(date>=20 && date<=3 && month==4 || date<=20 && date>=1 && month==5)
    {
        printf("ARIES");
    }
    else if(date>=21 && date<=31 && month==5 || date<=20 && date>=1 && month==6)
    {
        printf("GEMINI");
    }
    else if(date>=21 && date<=30 && month==6 || date<=22 && date>=1 && month==7)
    {
        printf("CANCER");
    }
    else if(date>=23 && date<=31 && month==7 || date<=22 && date>=1 && month==8)
    {
        printf("LEO");
    }
    else if(date>=23 && date<=31 && month==8 || date<=22 && date>=1 && month==9)
    {
        printf("VIRGO");
    }
    else if(date>=23 && date<=30 && month==9 || date<=22 && date>=1 && month==10)
    {
        printf("LIBRA");
    }
    else if(date>=23 && date<=31 && month==10 || date<=21 && date>=1 && month==11)
    {
        printf("SCORPIO");
    }
    else if(date>=22 && date<=30 && month==11 || date<=21 && date>=1 && month==12)
    {
        printf("SAGITTARIUS");
    }
    else if(date>=22 && date<=31 && month==12 || date<=19 && date>=1 && month==1)
    {
        printf("CAPRICORN");
    }
    else if(date>=20 && date<=31 && month==1 || date<=18 && date>=1 && month==2)
    {
        printf("AQUARIUS");
    }
    else if(date>=19 && date<=29 && month==2 || date<=20 && date>=1 && month==3)
    {
        printf("PISCES");
    }
    return 0;
}