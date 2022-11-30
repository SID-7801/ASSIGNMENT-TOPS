#include<stdio.h>
int main()
{
     int choice,addition,subtraction,multiplication,division,num1,num2;
    printf("1.addition 2.subtraction 3.multiplication 4.division \n ");
    while(choice!=5)
    {
        printf("Enter a choice: \n");
        scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf("enter mum1 and num2: ");
        scanf("%d %d",&num1,&num2);
        addition=num1+num2;
        printf("addition is %d\n",addition);
        break;

        case 2:
        printf("enter mum1 and num2: ");
        scanf("%d %d",&num1,&num2);
        subtraction=num1-num2;
        printf("asubtraction is %d\n",subtraction);
        break;

        case 3:
        printf("enter mum1 and num2: ");
        scanf("%d %d",&num1,&num2);
        multiplication=num1*num2;
        printf("multiplication is %d\n",multiplication);
        break;

        case 4:
        printf("enter mum1 and num2: ");
        scanf("%d %d",&num1,&num2);
        division=(float)num1/(float)num2;
        printf("division is %d\n",division);
        break;

        case 5:
        printf("exit");
        break;
    }
    }
}