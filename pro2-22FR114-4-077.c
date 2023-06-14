#include<stdio.h>

int main(){
  char strlist1[100];
  char strlist2[100];
  int i;

  scanf("%s",strlist1);

  for (i = 0; strlist1[i] != '\0'; i++) {
        strlist2[i] = strlist1[i];
    }
    strlist2[i] = '\0';

    printf("%s\n",strlist2);

    return 0;
}
