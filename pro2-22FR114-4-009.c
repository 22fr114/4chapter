#include<stdio.h>

int main(){
  int T[10];
  int i;


  for(i=0;i<10;i++){
    scanf("%d",&T[i]);
  }

  for(i=9;i>=0;i--){
    printf("%d\n",T[i]);
  }


  return 0;
}
