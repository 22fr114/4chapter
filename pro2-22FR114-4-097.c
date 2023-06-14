#include<stdio.h>

int main(){
  double x[5];
  double y[5];
  double ans[5]={0};
  int i,j;

  for(i=0;i<5;i++){
          scanf("%lf", &x[i]);
        }

  for(i=0;i<5;i++){                                                                   scanf("%lf", &y[i]);
        }
  
  for(i=0;i<5;i++){
    ans[i]=x[i]*x[i];
  }


  return 0;
}

    
