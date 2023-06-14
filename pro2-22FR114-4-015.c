#include<stdio.h>

int main(){
  int d[10];
  int i;
  int flag=0;

  for(i=0;i<10;i++){
    scanf("%d",&d[i]);
  }

  for(i=0;i<10;i++){
    if(d[i]%3 == 0){
      flag=1;
      break;
    }
  }

  if(flag==1){
    printf("ある\n");
  }else{
    printf("ない\n");
  }

  return 0;
}

  
