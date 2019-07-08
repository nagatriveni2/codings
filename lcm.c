#include<stdio.h>
int main()
{

  int a,b,l=0;
  scanf("%d",&a);
  scanf("%d",&b);
  if(a>b)
    l=lcm(a,b);
  else
    l=lcm(b,a);
  printf("%d",l);
  return 0;
}
int lcm(int a,int b)
{
  int temp=0,i=0;
  temp=a;
  while(1)
  {
    if(temp%b==0 && temp%a==0)
      break;
    temp++;
  }
  return temp;
}
