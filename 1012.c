#include <stdio.h>
#include <math.h>

int main(void) {
  double A, B, C;
  double pi = 3.14159;
  scanf("%lf %lf %lf", &A, &B, &C);
  double triangulo = (A * C)/2;
  double circulo = pi * pow(C,2);
  double trapezio = ((A + B)*C)/2;
  double quadrado = B * B;
  double retangulo = A * B;
  printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo); 
  return 0;
}
