#include<stdio.h>
int main()
{
    float height,base,area;
    printf("Enter height and base: \n");
    scanf("%f,%f",&height,&base);
    area = height*base/2;
    printf("Area of triangle = %f",area);
}