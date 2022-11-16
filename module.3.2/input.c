#include<stdio.h>
int main()
{
    int q,w,e,r,t,y,u,i,o,p;
    printf("Enter 10 elements: \n");
    scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&q,&w,&e,&r,&t,&y,&u,&i,&o,&p);
    q % 2==0?printf("%d is even number \n",q):printf("%d is odd number \n",q);
    w % 2==0?printf("%d is even number \n",w):printf("%d is odd number \n",w);
    e % 2==0?printf("%d is even number \n",e):printf("%d is odd number \n",e);
    r % 2==0?printf("%d is even number \n",r):printf("%d is odd number \n",r);
    t % 2==0?printf("%d is even number \n",t):printf("%d is odd number \n",t);
    y % 2==0?printf("%d is even number \n",y):printf("%d is odd number \n",y);
    u % 2==0?printf("%d is even number \n",u):printf("%d is odd number \n",u);
    i % 2==0?printf("%d is even number \n",i):printf("%d is odd number \n",i);
    o % 2==0?printf("%d is even number \n",o):printf("%d is odd number \n",o);
    p % 2==0?printf("%d is even number \n",p):printf("%d is odd number \n",p);
}