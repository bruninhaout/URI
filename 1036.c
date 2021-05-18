#include <stdio.h>
#include <math.h>

int main() {
  double A, B, C;
  scanf("%lf  %lf %lf", &A, &B, &C);
  double delta = (pow(B, 2) - (4*(A*C)));
  if (A == 0 || delta < 0){
    printf("Impossivel calcular\n");
  }
  else {
    double x1 = (-B + sqrt(delta))/(2*A);
    double x2 = (-B - sqrt(delta))/(2*A);
    printf("R1 = %.5f\nR2 = %.5f\n", x1, x2);
  }
  return 0;
}
