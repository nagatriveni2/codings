#include<stdio.h>
int main()
{
  char a[10],b[10],c[10],o[30];
  int i;
  scanf("%s",&a);
  scanf("%s",&b);
  scanf("%s",&c);
  for(i=0;a[i]!='\0';i++)
    if(a[i]=='a' || a[i]=='e' || a[i]=='o' || a[i]=='i' || a[i]=='u'|| a[i]=='A' || a[i]=='E' || a[i]=='O' || a[i]=='I' || a[i]=='U')
    {
      a[i]='$';
    }
  for(i=0;b[i]!='\0';i++)
    if(b[i]!='a' && b[i]!='e' && b[i]!='o' && b[i]!='i' && b[i]!='u'&& b[i]!='A' && b[i]!='E' && b[i]!='O' && b[i]!='I' && b[i]!='U')
    {
      b[i]='#';
    }
  for(i=0;c[i]!='\0';i++)
  {
    if(c[i]>=65 && c[i]<=90)
      continue;
  	else
      c[i]=c[i]-32;
  }
    printf("%s%s%s",a,b,c);
  // type your code here 
}
