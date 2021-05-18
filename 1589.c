#include <stdio.h>

int main(void) {
  int T;
  scanf("%d", &T);
  int i;
  for (i = 1; i<=T; i++){
    int R1, R2;
    scanf("%d %d", &R1, &R2);
    printf("%d\n", R1 + R2);
  }
  return 0;
}
