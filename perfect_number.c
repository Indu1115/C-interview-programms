#include<stdio.h>
void main()
{
  int n,s=0,temp;
  printf("Enter number:");
  scanf("%d",&n);
  temp=n;
  for(int i=1;i<(n/2)+1;i++)
  {
  if(n%i==0)
  s=s+i;
  }
  if(temp==s)
    printf("Given number %d is perfect number",temp);
  else
    printf("Given number %d is not perfect number",temp);
}
