#include<stdio.h>
int factorial(int n);
void main()
{
  int n,r,s=0,temp;
  printf("Enter number:");
  scanf("%d",&n);
  temp=n;
  while(n!=0)
  {
    r=n%10;
    s=s+factorial(r);
    n=n/10;
  }
  if(temp==s)
    printf("given number %d is strong number",temp);
  else
    printf("given number %d is not strong number",temp);
}
int factorial(int n)
{
  int fact=1;
  for(int i=n;i>0;i--)
  {
    fact=fact*i;
  }
  return fact;
}
