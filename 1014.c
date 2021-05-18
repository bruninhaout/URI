#include <stdio.h>

int main(void) {
  int X;
  scanf("%d", &X);
  float Y;
  scanf("%f", &Y);
  float consumo = X/Y;
  printf("%.3f km/l\n", consumo);
  return 0;
}
