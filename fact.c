#include<stdio.h>
int main()
{
  int fact=1,i,n;
  printf("\n Enter the number");
  scanf("%d",&n);
 for(i=1;i<=n;i++)
 fact=fact*i;
 printf("\n the factorial of %d is:%d",n,fact);
 return 0;
 }
