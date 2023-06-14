#include<stdio.h>
int main(){
  int a[5],b[5];

  int i,tmp;


  for(i=0;i<5;i++){
    scanf("%d",&a[i]);
  }

   for(i=0;i<5;i++){
    scanf("%d",&b[i]);
  }


   for(i=0;i<5;i++){
     for(int j=0;j<5;j++){
       if(a[i]==b[j]){
	 printf("Yes\n");
	 return 0;
       }
       
       
     }
   }


   printf("No\n");

   return 0;
}
