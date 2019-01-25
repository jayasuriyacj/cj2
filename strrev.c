#include<stdio.h>
#include<string.h>
int main()
{
  char arr[50];
  printf("\n Enter a string ");
  gets(arr);
  strrev(arr);
  printf("\n The reverse string is %s\n",arr);
  return 0;
  }
