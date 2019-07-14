#include<stdio.h>
int main()
{
  int a[10],n,i,k=0,found=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
  scanf("%d",&k);
  for(i=1;i<=n;i++)
    if(k==a[i])
    {
      printf("%d",i);
      found=1;
  		break;
    }
  if(found==0)
  {
    printf("%d",k);
  printf(" isn't present in the array.");
  }
  //Type your code here
  return 0;
}
