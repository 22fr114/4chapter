#include<stdio.h>


void fin(int d[5],int n){
  int i,j,k;
  int c=0;
  int sum=0,sub[5],in=0;


  for(sum=0,i=0,in=0;i<32;i++){
    for(j = 0,k=i;j<5;j++,k>>=1){
      if(k & 1){
	sum +=d[j];
	sub[in++] = j;
      }
    }

    if(sum == n){
      for(j=0;j<in;j++){
	printf("%d",sub[j]);
      }

      printf("\n");
      c++;
    }
  }
  if(c==0){
    printf("NO\n");
  }
}


int main(){
  int d[5];
  int n,i;


  for(i=0;i<5;i++){
    scanf("%d",&d[i]);
  }

  scanf("%d",&n);

  fin(d,n);


  return 0;

}

  
  
