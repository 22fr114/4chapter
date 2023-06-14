#include<stdio.h>

int main(){
  int num,max,min,i,n;


  scanf("%d",&n);

  scanf("%d",&num);
  max=num;
  min=num;


  for(i=1;i<n;i++){
    scanf("%d",&num);
    if(max<num)
      max=num;
    if(min>num)
      min=num;
  }
  printf("%d  %d\n",max,min);
  return 0;
}

