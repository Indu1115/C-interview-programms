//without using 3rd variable
#include<stdio.h>
void main()
{
  int a,b,temp;
  printf("Enter numbers:");
  scanf("%d %d",&a,&b);
  printf("Before swapping a is %d and b is %d\n",a,b);
  temp=a;
  a=b;
  b=temp;
  printf("After swapping a is %d and b is %d",a,b);
}

//using 3rd variable 1st method
#include<stdio.h>
void main()
{
  int a,b;
  printf("Enter numbers:");
  scanf("%d %d",&a,&b);
  printf("Before swapping a is %d and b is %d\n",a,b);
  a=a^b;
  b=a^b;
  a=a^b;
  printf("After swapping a is %d and b is %d",a,b);
}

//using 3rd variable 2nd method
#include<stdio.h>
void main()
{
  int a,b;
  printf("Enter numbers:");
  scanf("%d %d",&a,&b);
  printf("Before swapping a is %d and b is %d\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("After swapping a is %d and b is %d",a,b);
}
