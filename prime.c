#include<stdio.h>
void main()
{
  int n,s=0;
  printf("Enter number:");
  scanf("%d",&n);
  for(int i=1;i<=n/2+1;i++)
  {
    if(n%i==0)
    {
      s++;
    }
  }
  if(s==2)
     printf("Given number %d is prime number",n);
  else
     printf("Given number %d is not prime number",n);
}
