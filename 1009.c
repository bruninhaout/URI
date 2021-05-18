#include <stdio.h>

int main(void) {
  char nome;
  scanf("%s", &nome);
  double salario, montante;
  scanf("%lf %lf", &salario, &montante);
  double TOTAL = salario + (montante * 0.15);
  printf("TOTAL = R$ %.2lf\n", TOTAL);
  return 0;
}
