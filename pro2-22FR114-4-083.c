#include<stdio.h>

int main(){
  int d[]={0};
  int e[]={0};
  int n,k,i,j=0;

  scanf("%d%d",&n,&k);


  for(i=0;i<n;i++){
    scanf("%d",&d[i]);
  }
  

  for(i=0;i<n+1;i++){
    e[d[i]]=1;
  }

   for(i=0;i<k;i++){
     if(e[i]==1){
       d[j]=i;
       j++;
     }
   }


    for ( i = 0; i < n; i++) {
        printf("%d \n", d[i]);
    }
   
   
    return 0;
}


  
