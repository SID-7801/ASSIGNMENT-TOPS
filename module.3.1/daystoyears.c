#include<stdio.h>
int main()
{
    float years,days;
    printf("Enter no.of days you want to convert into years: \n");
    scanf("%f",&days);
    years=days/365;
    printf("%f years",years);

}