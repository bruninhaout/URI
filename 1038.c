#include <stdio.h>

int main(void) {
  int codigo, quantidade;
  scanf("%d %d", &codigo, &quantidade);
  double dog = 4;
  double xsal = 4.5;
  double xbacon = 5;
  double torra = 2;
  double refri = 1.5;

  switch (codigo){
    case 1:
    printf("Total: R$ %.2lf\n", dog * quantidade);
    break;
    case 2:
    printf("Total: R$ %.2lf\n", xsal * quantidade);
    break;
    case 3:
    printf("Total: R$ %.2lf\n", xbacon * quantidade);
    break;
    case 4:
    printf("Total: R$ %.2lf\n", torra * quantidade);
    break;
    case 5:
    printf("Total: R$ %.2lf\n", refri * quantidade);
    break;
  }
  return 0;
}
