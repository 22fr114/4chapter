#include<stdio.h>

int main(){
  int arr[2][2];
  int i,j,num1,num2;


  scanf("%d",&num1);
  scanf("%d",&num2);

   arr[0][0]=num1/10;
   arr[1][0]=num2/10;
   arr[0][1]=num1%10;
   arr[1][1]=num2%10;


   return 0;
}
