#include <stdio.h>

int main(void) {
  int cod1, num1, cod2, num2;
  double vl1, vl2;
  scanf("%d %d %lf", &cod1, &num1, &vl1);
  scanf("%d %d %lf", &cod2, &num2, &vl2);
  double valor = (num1 * vl1)+(num2 * vl2);
  printf("VALOR A PAGAR: R$ %.2lf\n", valor);
  return 0;
}
