#include<stdio.h>
int main()
{
  int n,i,ele1,ele2,in1=-1,in2=-1;
  scanf("%d",&n);
  int a[n];
  
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  scanf("%d%d",&ele1,&ele2);
  for(i=0;i<n;i++)
  {
    if(ele1==a[i] && in1==-1)
    {
      in1=i;     
    }
  if(ele2==a[i] && in2==-1)
    {
      in2=i;     
    }
  }
  printf("Element 1 index = %d\nElement 2 index = %d",in1,in2);
  	//type your code here
  return 0;
}
