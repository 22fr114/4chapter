#include<stdio.h>


int main(){

  int a[100];
  int i;



  for(i=0;i<100;i++){
    a[i]=i*i;
  }

  for(i=0;i<100;i++){
    printf("a[%d] = %d\n",i,a[i]);
  }


  return 0;

}

		   
