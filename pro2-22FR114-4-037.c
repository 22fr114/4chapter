#include<stdio.h>

int main(){
  int a[10];
  int i,j;

  for(i=0;i<10;i++){
    scanf("%d",&a[i]);
  }

  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      if(a[i]==a[j] && i!=j){
	printf("%d,%d\n",i,a[i]);
      }
    }
  }

  return 0;
}
