#include<stdio.h>

int main(){
  int a[2][3];
  int i,j;



  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
      a[i][j]=i+j;
    printf("%d\n",a[i][j]);
    }
  }


  return 0;
}
