#include <stdio.h>

int main(void) {
  int tempo, velocidade;
  scanf("%d %d", &tempo, &velocidade);
  float distancia = tempo * velocidade;
 float gasto = distancia/12;
  printf("%.3f\n", gasto);
  return 0;
}
