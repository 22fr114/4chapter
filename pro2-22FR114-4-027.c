#include<stdio.h>

int main(){
  int avr;
  int i,j,sum,n;


  for(i=0;i<3;i++){
    for(sum=0,j=0;j<3;j++){
      scanf("%d",&n);
      sum+=n;
    }
    avr=sum/3;
    printf("%d\n",avr);
  }
  return 0;
}
