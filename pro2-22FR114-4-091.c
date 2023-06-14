#include<stdio.h>

int main(){
  int A[2][3];
  int B[3][4];
  int C[2][4];
  
  int i,j,k;


   for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 3; j++){
          scanf("%d", &A[i][j]);
        }
     }  

    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 4; j++){
          scanf("%d", &B[i][j]);
        }
     }

    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 4; j++) {
            C[i][j] = 0;
            for ( k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }


    return 0;
}


    
