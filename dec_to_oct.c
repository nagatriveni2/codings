#include<stdio.h>
int main()
{
  int n,a[32],i,j;
  scanf("%d",&n);
  
  i=0;
  while(n>0)
  {
    a[i]=n%8;
    n=n/8;
    i++;
  }
  for(j=i-1;j>=0;j--)
    printf("%d",a[j]);
      //Type your code here
  return 0;
}
