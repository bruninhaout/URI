#include <stdio.h>
#include <math.h>

int main(void) {
  double raio;
  scanf("%lf", &raio);
  double pi = 3.14159;
  double area = pow(raio, 2) * pi;
  printf("A=%.4f\n", area);

  return 0;
}
