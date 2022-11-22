#include<stdio.h>
int main()
{
    int num[10],i,even=0,odd=0,sumeven=0,sumodd=0;
    printf("Enter 10 Elements : ");
    for (i = 0; i < 10; i++)
    { 
        scanf("%d",&num[i]);

        if(num[i]%2==0)
        {
            even++;
            sumeven=sumeven+num[i];
        }
        else
        {
            odd++;
            sumodd=sumodd+num[i];
        }
    }
    printf("\n even number are %d \n",even);
    printf("\n odd number are %d \n",odd);
    printf("\n sum of even number are %d \n",sumeven);
    printf("\n sum of odd number are %d \n",odd);

    }
    
   