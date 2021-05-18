#include <stdio.h>
#include <math.h>

int main(void) {
  double raio;
  scanf("%lf", &raio);
  double pi = 3.14159;
  double VOLUME = (4.0/3) * pi * pow(raio, 3);
  printf("VOLUME = %.3lf\n", VOLUME);
  return 0;
}
