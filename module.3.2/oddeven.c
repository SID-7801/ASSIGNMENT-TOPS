#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to check odd or even");
    scanf("%d",&num);
    num % 2==0?printf("%d is even number",num):printf("%d is odd number",num);
}