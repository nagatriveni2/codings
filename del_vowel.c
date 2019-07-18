#include<stdio.h>
int main()
{
  char str[100],new[100];
  int i,d;
  scanf("%[^\n]s", str);
  d=0;
 for(i=0;str[i]!='\0';i++)
 {
   
   if(str[i]=='a' ||str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
   {
     continue;
   }
  else
  {
    new[d]=str[i];
	d++;
  }
 }
  new[d]='\0';
  strcpy(str,new);
  printf("%s",str);
  //Type your code here
  
  return 0;
}
