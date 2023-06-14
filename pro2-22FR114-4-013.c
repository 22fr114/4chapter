#include<stdio.h>

void prime(int num){
  int i,j;

  if(num>=2){
    printf("2\n");
    
    for(i=3;i<=num;i++){
      for(j=2;j<i;j++){
      if(i%j==0)break;
    }
      if(j==i)
	printf("%d\n",i);
    }
  }
}

int main(){
  int a;
  scanf("%d",&a);
  prime(a);

  return 0;
}

      
