#include <stdio.h>
#include <math.h>

int main(void) {
  float x1, y1;
  scanf("%f %f", &x1, &y1);
  float x2, y2;
  scanf("%f %f", &x2, &y2);
  float x3 = x2 - x1;
  float x4 = y2 - y1;
  float distancia = pow(x3, 2) + pow(x4, 2);
  float pontos = sqrt(distancia);
  printf("%.4f\n", pontos);
  return 0;
}
