#include<stdio.h>
int main()
{
  int years;
  float p,t,si=0;
  scanf("%f",&p);
  scanf("%d",&years);
  scanf("%f",&t);
  si=(p*years*t)/100;
  printf("%f",si);
  
  //your code here
  return 0;
}
