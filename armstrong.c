#include<stdio.h>
#include<math.h>
void main()
{
  int n,temp,s=0,c=0,r;
  printf("Enter number:");
  scanf("%d",&n);
  temp=n;
  while(n!=0)
  {
    n=n/10;
    c++;
  }
  n=temp;
  while(n!=0)
  {
    r=n%10;
    s=s+pow(r,c);
    n=n/10;
  }
  if(temp==s)
    printf("Given number %d is armstrong number",temp);
  else
    printf("Given number %d is not armstrong number",temp);
}
