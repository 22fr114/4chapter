#include<stdio.h>

int main(){
  int b[20];

  int i,k,tmp;


  for(i=0;i<20;i++){
    scanf("%d",&b[i]);
  }

  scanf("%d",&k);


  for(i=k;i<20;i++){
    b[i]=b[i+1];
  }
  b[19]=0;


}


