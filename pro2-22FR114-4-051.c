#include<stdio.h>

int main(){
  char str[100];
  int i,j;


  scanf("%s",str);

  for(i=1;str[i]!='\0';i++){
    str[i-1]=str[i];
  }
  str[i-1]= '\0';

  printf("%s",str);

  return 0;
}
