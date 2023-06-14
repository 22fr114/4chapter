#include<stdio.h>

int main(){
  int num[10];
  int i,j,tmp;


  for(i=0;i<10;i++){
    scanf("%d",&num[i]);
  }

  for(i=0;i<10;i++){
    for(j=0;j<10-i-1;j++){
      if(num[j]>num[j+i]){
	tmp=num[j];
	num[j]=num[j+1];
	num[j+1]=tmp;
      }
    }
  }



  printf("%d",num[2]);
   
  return 0;
}
