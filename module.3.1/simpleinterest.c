#include<stdio.h>
int main()
{
    float rate_interest,principal_amount,time_period,simple_interest;
    printf("Enter the principal amount: \n Enter the rate of interest: \n Enter the time period: \n");
    scanf("%f,%f,%f",&principal_amount,&rate_interest,&time_period);
    simple_interest=principal_amount*rate_interest*time_period;
    printf("simple interest = %f",simple_interest);
}