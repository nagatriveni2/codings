#include<stdio.h>

int main()
{
  long int n,i=0,j=1,octal=0,rem=0;
  scanf("%ld",&n);
  while(n!=0)
  {
    rem=n%10;
    octal=octal+rem*j;
    j=j*2;
    n=n/10;
  }
  printf("%lo",octal);
  //Type your code here
}
