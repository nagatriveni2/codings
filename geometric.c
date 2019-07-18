#include<stdio.h>
#include<math.h>
int main()
{
  int n,r,a,val=0,t1=0;
  scanf("%d",&n);
  if(n%2==1)
  {
    a=1;r=2;
    t1=(n+1)/2;
	val=a*pow(r,t1-1);
    printf("%d",val);
  }
  else
  {
    a=1;r=3;
    t1=n/2;
    val=a*pow(r,t1-1);
    printf("%d",val);
  }
    //type your code here
  return 0;
}
