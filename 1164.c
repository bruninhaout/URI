#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int a, b, c, x;
  int d = 0;
  for (a=1;a<=n;a++){
    scanf("%d", &x);
    c=x/2; 
    d=0;
    for(b=1;b<=c;b++){
      if (x%b==0)
        d +=b;
    }
      if (d==x)
        printf("%d eh perfeito\n", x);
      
      else 
        printf("%d nao eh perfeito\n", x);
      
    
  }
  return 0;
}
