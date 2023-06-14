#include<stdio.h>


int make2(int a){
  int data[100];
  int i=0,j;

  while(a>0){
    data[i]=a%2;
    a/=2;
    i++;
  }
  
for ( j = i - 1; j >= 0; j--) {
        printf("%d",data[j]);
    }
    printf("\n");
}

  
int main(){
  int a=10;

  make2(a);

  return 0;
}

