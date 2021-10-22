#include<stdio.h>
void main()
{
  int n,temp,r,s=0;
  printf("Enetr number:");
  scanf("%d",&n);
  temp=n;
  while(n!=0)
  {
    r=n%10;
    s=s*10+r;
    n=n/10;
  }
  if(s==temp)
    printf("Given number %d is palindrome",temp);
  else
    printf("Given number %d is palindrome",temp);
}
