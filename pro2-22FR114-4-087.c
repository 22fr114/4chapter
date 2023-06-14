#include<stdio.h>

int main(){
  int x[2][2];
  int a,i,j;

  for(i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
            scanf("%d", &x[i][j]);
        }
    }


  a=x[0][0]*x[1][1]-(x[0][1]*x[1][0]);


  printf("%d\n",a);

  return 0;
}
