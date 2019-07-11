#include<stdio.h>
int main()
{
  int n,t=0,s=0;
  scanf("%d",&n);

  if(n%2==0)
  {
    n=n/2;
    t=n-1;
    printf("%d",t);
  }
  else
  {
    t=n-1;
    printf("%d",t);
  }
	
}
