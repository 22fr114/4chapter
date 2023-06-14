#include<stdio.h>

int main(){
  char str[13];
  int i;

   for (i = 0; i < 13; i += 2) {
        printf("%c", str[i]);
    }
    printf("\n");

    for (i = 0; i < 13; i += 3) {
        printf("%c", str[i]);
    }
     printf("\n");

     for (i = 0; i < 13; i += 4) {
        printf("%c", str[i]);
    }
      printf("\n");
      return 0;
}
