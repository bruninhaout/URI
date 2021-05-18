#include <stdio.h>

int main(void) {
  int N; 
  scanf("%d", &N);
  
  //float a, b, c, d, e, f, g, x, y, z, w, v, p;
  int a = N/100;
  int x = N%100;
  int b = x/50;
  int y = (N%100)%50;
  int c = y/20;
  int z = ((N%100)%50)%20;
  int d = z/10;
  int w = (((N%100)%50)%20)%10;
  int e = w/5;
  int v = ((((N%100)%50)%20)%10)%5;
  int f = v/2;
  int p = (((((N%100)%50)%20)%10)%5)%2;
  int g = p/1;


  /*float c = N%b/20;
  float d = N%c/10;
  float e = N%d/5;
  float f = N%e/2;
  float g = N%f/1;*/
  printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", N, a, b, c, d, e, f, g);
  return 0;
}
