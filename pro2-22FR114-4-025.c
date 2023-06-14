#include<stdio.h>

int main(){
  int a[20];
  int max,min,n,i;


  scanf("%d",&a[0]);
  max=a[0];


  for(i=1;i<20;i++){
    scanf("%d",&a[i]);
    if(max<a[i])
    max=a[i];
  }

  for(i=0;i<20;i++){
    if(a[i]==max)
      n++;
  }

  printf("%d  %d\n",max,n);

  return 0;
}

    
