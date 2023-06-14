#include<stdio.h>

void f(int x[4],char ex[8],int sum,int ind){
  if (ind == 4){
    if(sum == 10){
    printf("%s\n",ex);
    }
    return ;
  }

   ex[ind * 2] = '+';
    ex[ind * 2 + 1] = x[ind] + '0';
    f(x, ex, sum + x[ind], ind + 1);

    ex[ind * 2] = '-';
    ex[ind * 2 + 1] = x[ind] + '0';
    f(x, ex, sum - x[ind], ind + 1);
}
  

int main(){
  int x[4];
  char ex[8] = "0+0+0+0";
  int i;
  

  for(i=0;i<4;i++){
    scanf("%d",&x[i]);
  }

  f(x,ex,0,0);

  return 0;
}

  
