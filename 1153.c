#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int y;
  int a = 1;
  for (y=n; y>=1 ; y--){
    a = a * y;
  } 
  printf("%d\n",a);
  return 0;
}
