#include<stdio.h>
int a,i,n,j,k;
int main()
{
    printf("enter current tank level:");
    scanf("%d", &a);
    printf("enter the maximum tank level:");
    scanf("%d",&n);
    for(i=a;i<=n;i++)
    {
        printf("\n current level:%d",i);
        if(i==n)
        {
        printf("\ntank is full");
        }
    }
   
    for(j=n;j>=0;j--)
   {
           printf("\n current tank level: %d",j);
           if(j==0)
    {
        printf("\n tank is empty");
    }
       }
       for(k=0;k<=100;k++)
       {
           printf("\n water level is %d",k);
           if(k==100)
           {
           printf("\n tank is full");
       }
       }
return 0;
}