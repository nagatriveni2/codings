#include <stdio.h>
int main() {
  char c,t="";
  scanf("%c",&c);
  if(c<97 && c>=65)
    t=c+32;
  if(c>=97 && c<=123)
    t=c-32;
  printf("%c",t);
	// Type your code here
	return 0;
}
