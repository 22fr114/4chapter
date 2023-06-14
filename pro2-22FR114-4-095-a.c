#include <stdio.h>

void d(int m[][2]) {
  int i,j;
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

void mul(int A[2][2], int B[2][2], int ans[2][2]) {
  int i,j,k;
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
            ans[i][j] = 0;
            for ( k = 0; k < 2; k++) {
                ans[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[2][2];
    int B[2][2];
    int C[2][2];

    int i,j;

    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
	  scanf("%d", &B[i][j]);
        }
    }

    mul(A, B, C);

    d(C);


    return 0;
}
