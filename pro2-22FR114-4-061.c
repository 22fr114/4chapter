#include<stdio.h>
#include<string.h>

int main(){
  char tdu[3][20]={"Tokyo","Denki","University"};
  char a[20];
  int i,ans=0;

  while(ans!=1){
    scanf("%s",a);

    for(i=0;i<3;i++){
      if(strcmp(a,tdu[i]) == 0){
	ans=1;
	break;
      }
      
    }
    
  }

  return 0;
}
