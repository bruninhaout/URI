#include <stdio.h>

int main(void) {
 int n;
 scanf("%d", &n);
 int i, x, y, z=0;
for(i=1;i<=n;i++){
  scanf("%d", &x);
  for(y=2;y<x;y++){
    if(x%y==0)
    z++;
    else 
    continue;
  }
  if(z!=0)
  printf("%d nao eh primo\n", x);
  else 
  printf("%d eh primo\n", x);
  x  = 0;
  z = 0;
}
  return 0;
}
