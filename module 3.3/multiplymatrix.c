#include<stdio.h>
int main()
{
    int arr[2][2];
    int arr1[2][2];
    int mull[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter value of position %d %d ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter value of position %d %d ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            mull[i][j]=0;
            
            for(int k=0;k<2;k++)
            {
                mull[i][j] += arr[i][k]*arr1[k][j];
            }
        }
        printf("\n");
    }
   for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\t",mull[i][j]);
            
        }
        printf("\n");

    }
}    