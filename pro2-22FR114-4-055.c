#include<stdio.h>

int main(){
  char string[100],substring[100];
  char c;
  int i,j;

  scanf("%s",string);
  
  scanf(" %c",&c);


  for(i=0;string!='\0';i++){
    if(string[i]==c){
      j=i;
      break;
    }
  }

  for(i=0;i<=j;i++){
    substring[i]=string[i];
  }
  substring[i+1]='\0';
  

  printf("%s\n",substring);
  return 0;
}
