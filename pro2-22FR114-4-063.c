#include<stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char str[100];
  int i,count = 0;
  int chars[256] = {0}; 

  
  fgets(str, sizeof(str), stdin);

  for (i = 0; i < strlen(str); i++) {
    if (!isspace(str[i])) {
      if (chars[(unsigned char)str[i]] == 0) {
	count++;
	chars[(unsigned char)str[i]] = 1;
      }
    }
  }

  printf("%d\n", count);

  return 0;
}
