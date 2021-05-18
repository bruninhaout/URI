#include <stdio.h>

int main(void) {
  int segs;
  scanf("%d", &segs);
  int minuto = segs/60;
  segs = segs%60;
  int hora = minuto/60;
  minuto = minuto%60;

  printf("%d:%d:%d\n", hora, minuto, segs);
  return 0;
}
