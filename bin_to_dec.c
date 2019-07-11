#include<stdio.h>
int main()
{
  int dec,bin,num,base=1,rem=0;
  scanf("%d",&num);
  bin=num;
  while(num>0)
  {
    rem=num%10;
    dec=dec+rem*base;
    num=num/10;
    base=base*2;
  }
  printf("%d",dec);
  //Type your code here
  return 0;
}
