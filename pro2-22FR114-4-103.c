#include<stdio.h>

int main(){
  int sales[4][3][12];
  int maxsales[3];
  int maxmonth[3];
  char shop[4]={'A','B','C','D'};
  char name[3]={'a','b','c'};
  int i,j,k,total;

  for(i=0;i<4;i++){
    for(j=0;j<3;j++){
      for(k=0;k<12;k++){
	scanf("%d",&sales[i][k][j]);
      }
    }
  }

  int max,best;

  for(j=0;j<3;j++){
     max=0;
     best=0;
     for(i=0;i<4;i++){
       total=0;
       for(k=0;k<12;k++){
	 total+=sales[i][j][k];
       }
       if(total>max){
	 max=total;
	 best=i;
       }
     }
     printf("%c;%c\n",name[j],shop[best]);
     maxsales[j]=max;
  }

  int maxM;

  for(j=0;j<3;j++){
    maxM=0;
     max = maxsales[j];
        for (k = 0; k < 12; k++) {
            for (i = 0; i < 4; i++) {
                if (sales[i][j][k] > max) {
                    max = sales[i][j][k];
                    maxM = k + 1;
                }
            }
        }
	printf("%c; month %d\n",name[j],maxM);
  }

  return 0;
}
