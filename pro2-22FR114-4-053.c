#include<stdio.h>

int main(){
  char charlist[100];
  char c='a';
  int i;


  for(i=0,c='a';c<='z';c++,i++){
    charlist[i]=c;
  }


  printf("%s\n",charlist);


  return 0;
}
