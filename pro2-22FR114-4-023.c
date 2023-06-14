#include<stdio.h>

int main(){
  int mult[9][9];
  int i,j;

  for(i=0;i<9;i++){
    for(j=0;j<9;j++){
      mult[i][j]=(i+1)*(j+1);
    }
  }

  return 0;
}
