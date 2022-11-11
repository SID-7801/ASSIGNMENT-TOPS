#include<stdio.h>
int main()
{
    float years,days;
    printf("Enter no.of years you want to convert into days: \n");
    scanf("%f",&years);
    days=years*365;
    printf("%f days",days);
}
