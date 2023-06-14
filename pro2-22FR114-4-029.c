#include<stdio.h>

void  sco(float A[5][4]){
  int i,j,sum,avr;


  for(i=0;i<5;i++){
    for(sum=0,j=0;j<3;j++){
      scanf("%f",&A[i][j]);
      sum+=A[i][j];
    }
    avr=sum/3;
    A[i][j]=avr;
  }
}


char rank(float A[5][4],int j){
  int i;

  for(i=0;i<5;i++){
    if(A[j][3]>80){
      return 'A';
    }else if(A[j][3]>70){
      return 'B';
    }else if(A[j][3]>60){
      return 'C';
    }else {
      return 'D';
    }
  }
}


void print(float A[5][4]){
  int i,j;
  char c;


    printf("No.  Japanese  Math  Eng  Ave  Rank\n");

  for(i=0;i<5;i++){
    printf("%d   ",i);
    for(j=0;j<4;j++){
      printf("%.1f  ",A[i][j]);
    }
    c=rank(A,i);
    printf("%c\n",c);
  }
}

    
      


int main(){
  int i,j;
  float A[5][4];

  sco(A);

  print(A);

  return 0;
}
