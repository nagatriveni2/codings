#include<stdio.h>
#include<string.h>
int main()
{
  char str[1000];
  int i,count=0;
  scanf("%[^\n]s",&str);
  
  for(i=0;str[i]!='\0';i++)
        if(str[i]==' ')
      		count+=1;
  printf("%d",count+1);
  //Type your code here
  return 0;
}
