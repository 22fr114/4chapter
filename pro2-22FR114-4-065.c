#include<stdio.h>
#include<string.h>

int main(){
  char str1[100];
  int l,j;
  
  scanf("%s",str1);

  l=strlen(str1);

  for(j=l;j>-1;j--){

    printf("%c",str1[j]);
  }
  return 0;
}
