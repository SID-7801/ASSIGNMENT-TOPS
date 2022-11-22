#include<stdio.h>
int main()
{
    int count=1,i,j;
    for(i=1;i<6;i++);
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",count);
            count++;
        }
        printf("\n");
    }
}