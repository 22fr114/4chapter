#include<stdio.h>

void  sure(int a[100]){
  int i;

  for(i=7;i<100;i++){

    a[i]=a[i-1]+i/2;
  }
}


    
int main(){
    int a[100]={1,3,5,7,10,17,26};
  int i;

  sure(a);

  for(i=0;i<100;i++){
    printf("%d\n",a[i]);
  }

  return 0;
}
