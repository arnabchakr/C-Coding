#include<stdio.h>
void main()
{
    int i,isPrime,n;
    isPrime=1;
    printf("\n Enter the no::");
    scanf("%d",&n);
    for(i=2;i<n-1;i++)
    {
      if(n%i==0)
       {
         isPrime=0;  
           break;
       }
    } 
   if(isPrime==1)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
} 
