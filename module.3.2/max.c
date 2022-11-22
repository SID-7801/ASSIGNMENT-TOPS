#include<stdio.h>
int main()
{
    int n,i,max,a[100];
    printf("Enter mumbers : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
           max=a[i];
        }
        
    }
    printf("max number is %d", max);
}