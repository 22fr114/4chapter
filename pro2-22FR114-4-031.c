#include<stdio.h>
#include<math.h>

int main(){
  int a[20];
  int i;

  for(i=0;i<10;i++){
    scanf("%d",&a[i]);
  }



  int s,S;
  s=a[0]-a[1];
  s=fabs(s);
  for(i=0;i<9;i++){
    S=fabs(a[i]-a[i+1]);
    if(S!=s){
      printf("No\n");
      return 0;
    }
  }

  printf("Yes\n");

  return 0;
}

  
