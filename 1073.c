#include <stdio.h>
#include <math.h>

int main(void) {
  int n;
  int x = 1;
  
scanf("%d", &n);
   
 while(x <= n){
  x++;
 if (x%2==0){
  printf("%d^2 = %d\n", x, (x*x));
  }
 }
 
  return 0;
}
