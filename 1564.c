#include <stdio.h>

#define TRUE 1

int main(void) {
  int n;
  
  while (scanf("%d", &n) != EOF){
    if (n != 0)
    printf("vai ter duas!\n");
    else
    printf("vai ter copa!\n");
  }
  return 0;
}
