#include<stdio.h>

int main(){
  char str[100];
  int i;

  scanf("%[^\n]",str);

  for(i=0;str[i]!='\0';i++){
    if(str[i]==' '){
      printf("' '");
    }else{
      printf("%c",str[i]);
    }
  }

  return 0;
}
