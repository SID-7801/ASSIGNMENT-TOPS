#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year to check leap year or not: ");
    scanf("%d",&year);
    if(year % 4==0)
    {
        if(year % 400==0)
        {
             if(year % 100==0)
             {
                printf("%d is a leap year",year);
             }
             else{
                printf("%d is not a leap year",year);
             }
        }
        else{
            printf("%d is a leap year",year);
        }
    }
    else{
        printf("%d is not a leap year",year);
    }

}