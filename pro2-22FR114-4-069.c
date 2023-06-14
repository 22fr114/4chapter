#include<stdio.h>


void re(char x[6]){
  int tmp,i,j;

  tmp=x[0];

    for(j=0;j<5;j++){
    x[j]=x[j+1];
    }
    x[j-1]=tmp;
}

int main(){
  char str[6];
  int i,j,tmp;


  scanf("%s",str);

  for(i=0;i<5;i++){
    re(str);
    printf("%s\n",str);
  }

  return 0;
}


  
