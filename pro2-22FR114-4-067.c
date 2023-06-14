#include<stdio.h>

int main(){
  char a[4];
  int tmp,i,j;


  for(i=0;i<4;i++){
    scanf("%c",&a[i]);
  }



  for(i=1;i<4;i++){
    printf("%c",a[i]);
  }
  printf("%c\n",a[0]);


  return 0;
}



  
