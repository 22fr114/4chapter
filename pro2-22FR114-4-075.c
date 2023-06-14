#include<stdio.h>

int main(){
  char str1[100];
  char str2[100];
  int i;

  scanf("%s%s",str1,str2);

  for(i=0;str1[i]!='\0' && str2[i]!='\0';i++){
    if(str1[i]!=str2[i]){
      break;
    }
  }

    if (str1[i] == '\0' && str2[i] == '\0') {
      printf("%s\n", str1);
    } else {
      printf("%s %s\n", str1, str2);
    }

    return 0;
}
