#include<stdio.h>

int main(){
  int A[4][3];
  int B[3][5];
  int C[4][5];

  int i,j,k;


   for ( i = 0; i < 4; i++) {
        for ( j = 0; j < 3; j++){
          scanf("%d", &A[i][j]);
        }
     }

    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 5; j++){
          scanf("%d", &B[i][j]);
        }
     }

    for ( i = 0; i < 4; i++) {
        for ( j = 0; j < 5; j++) {
            C[i][j] = 0;
            for ( k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }


     for ( i = 0; i < 4; i++) {
        for ( j = 0; j < 5; j++) {
	  printf("%d ",C[i][j]);
	}
	printf("\n");
     }
     


    return 0;
}
