#include<stdio.h>


void scan(double a[2][2]){
  int i,j;

   for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
            scanf("%lf", &a[i][j]);
        }
    }
}

void plas(double a[2][2],double b[2][2],double ans[2][2]){
  int i,j;


  for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
	  ans[i][j]=a[i][j]+b[i][j];
	}
  }
}


void mulAB(double a[2][2],double b[2][2],double ans[2][2]){
  int i,j,k;
  for(i=0;i<2;i++){
       for(j=0;j<2;j++){
         ans[i][j]=0;
       }
   }

  for(k=0;k<2;k++){
     for(i=0;i<2;i++){
       for(j=0;j<2;j++){
         ans[k][i]+=a[k][i]*b[i][j];
       }
     }
 }
}

void mulBA(double a[2][2],double b[2][2],double ans[2][2]){            int i,j,k;
  for(i=0;i<2;i++){
       for(j=0;j<2;j++){
         ans[i][j]=0;
       }
   }

  for(k=0;k<2;k++){
     for(i=0;i<2;i++){
       for(j=0;j<2;j++){
         ans[k][i]+=b[k][i]*a[i][j];
       }
     }
 }
}


void rev(double a[2][2],double ans[2][2]){
  double det;

  det=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);

  ans[0][0] = a[1][1]/det;
  ans[0][1] = a[0][1]/det;
  ans[1][0] = a[1][0]/det;
  ans[1][1] = a[0][0]/det;
}

void print(double a[2][2]){
  int i,j;

  for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
	  printf("%lf ",a[i][j]);
	}
	printf("\n");
  }
}



int main(){
  double A[2][2];
  double B[2][2];
  double c[2][2];
  double d[2][2];
  double e[2][2];
  double f[2][2];

  scan(A);
  scan(B);

  plas(A,B,c);
  

  mulAB(A,B,d);

  mulBA(A,B,e);

  rev(A,f);


  print(c);
  print(d);
  print(e);
  print(f);

  return 0;
}
