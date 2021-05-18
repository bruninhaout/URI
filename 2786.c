#include <stdio.h>

int main(void) {
  int l, c;
  scanf("%d %d", &l, &c);

  int t2 = ((l-1) * 2) + ((c-1)* 2);

  int t1 = (l+l-1)*(c-1)+l;

  printf("%d\n%d\n", t1, t2);
  return 0;
}
