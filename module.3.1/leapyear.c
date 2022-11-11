#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year to check leap year or not: ");
    scanf("%d",&year);
    if(year % 4==0)
    {
        printf("%d year is a leaf year",year);
    }
    else{
        printf("%d year is not a leaf year",year);
    }
}