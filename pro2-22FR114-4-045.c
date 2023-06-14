#include<stdio.h>

int main(){
  char in[10];
  int i,j;

  scanf("%10s",in);

  for(i=0;i<9;i++){
    for(j=0;j<10+1;j++){
      if(i+1==j)
	printf(" ");

      printf("%c",in[j]);
    }
    printf("\n");
  }

  return 0;
}

	
