#include<stdio.h>
int main()
{
  int n,a=0,b=1,c=0,d=2;
  scanf("%d",&n);
  printf("%d %d",a,b);
   while(d<n)
   {
     c=a+b;
     d++;
     printf(" %d",c);
     a=b;
     b=c;
   }
  //Type your code here
  return 0;
}
