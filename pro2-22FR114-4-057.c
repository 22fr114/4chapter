#include<stdio.h>

void is(int num[]){
  int j,i,m;


  for(i=2;i<20;i++){
    for(j=2;j<20;j++){
      if(i%j==0)
	num[i]++;
    }
  }
}





int main(){
  int   c[20];
  int s,i,j;

  for(i=0;i<20;i++){
    c[i]=0;
  }


  is(c);
  
 for ( i = 0; i < 20; i++) {
        printf("%d\n",c[i]);
    }

  return 0;
}

    
  
  
