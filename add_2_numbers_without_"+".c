#include<stdio.h>
void main()
{
  int a,b;
  printf("Enter numbers:");
  scanf("%d %d",&a,&b);
  while(b!=0)
  {
    a++;
    b--;
  }
  printf("Sum is %d",a);
}
