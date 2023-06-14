#include<stdio.h>

int main(){
  int T[10];
  int i,s;


  for(i=0;i<10;i++){
    scanf("%d",&s);
    T[i]=s;
  }

  for(i=0;i<10;i++){
    printf("%d\n",T[i]);
  }


  return 0;
}
