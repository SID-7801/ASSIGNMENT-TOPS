#include<stdio.h>
int main()
{
    int num1,num2,addition,substraction,multiplication,division,mod,inc,dec;
    printf("Enter num1 and num2: ");
    scanf("%d,%d",&num1,&num2);
    addition=num1+num2;
    substraction=num1-num2;
    multiplication=num1*num2;
    division=(float)num1/(float)num2;
    mod=num1%num2;
    inc=num1++;
    dec=num2--;
    printf("addition is %d\n",addition);
    printf("substraction is %d\n",substraction);
    printf("multiplication is %d\n",multiplication);
    printf("division is %d\n",division);
    printf("mod is %d\n",mod);
    printf("inc is %d\n",inc);
    printf("dec is %d\n",dec);



}