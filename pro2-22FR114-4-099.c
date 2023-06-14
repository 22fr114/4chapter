#include<stdio.h>

int main(){
  int x[100]={0};
  int f[10]={0};

  int i;


  for(i=0;i<100;i++){
    scanf("%d",&x[1]);
    f[x[i]]++;
  }


  for(i=0;i<10;i++){
    printf("%d\t|\t%d\n",i,f[i]);
  }


  return 0;
}
