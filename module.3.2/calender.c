#include<stdio.h>
int main()
{
    int day;
    while(day!=8)
    {
    printf("Enter your choice: \n");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("monday\n");
        break;

    case 2:
        printf("tuesday\n");
        break;

    case 3:
        printf("wednesday\n");
        break;

    case 4:
        printf("thrusday\n");
        break;

    case 5:
        printf("friday\n");
        break;

    case 6:
        printf("saturday\n");
        break;

    case 7:
        printf("sunday\n");
        break;
    }
    }
}