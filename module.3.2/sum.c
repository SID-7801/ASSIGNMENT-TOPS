#include<stdio.h>
int main()
{
    int a[4],sum=0;
    printf("Enter the elements: ");
    for(int i=0;i<4;i++)
    {
          scanf("%d",&a[i]);
    }
    for(int i=0;i<4;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of elements is %d ",sum);

}