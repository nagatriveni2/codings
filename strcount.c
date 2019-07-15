#include<stdio.h>
#include<string.h>
int main()
{
  char str[50];
  int i,j,k,count;
  scanf("%s",&str);
  if(strlen(str)<=20)
  {
  for(i=0;str[i]!='\0';i++)
  {
    count=1;
    while(str[i]==str[i+1])
    {
      i++;
        count++;
    }
  printf("%c%d",str[i],count);
    
  }
  }
  else
  {
    printf("Invalid Input");
  }
  
        
      
	//type your code here
}
