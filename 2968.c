#include <stdio.h>
#include <math.h>

int main(void) {
  int v, n;
  scanf("%d %d", &v, &n);
  
  int i;
  int f = v*n; 
  for (i = 10; i < 100; i+=10){
  double resultado =((double)f * i)/100;
  printf("%d", (int) ceil(resultado));
  if(i!=90)
    printf(" ");
  }
  printf("\n");
  return 0;
}
