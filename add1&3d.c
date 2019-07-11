#include<stdio.h>
int main()
{
  int a,b=0,c=0,s=0;
  scanf("%d",&a);
  b=a%10;
  while(a>=10)
  {
  a=a/10;
  }
  c=a;
  s=c+b;
  printf("%d",s);
  //Type your code here
  return 0;
}
