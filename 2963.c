#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int i;

  int nota;
  scanf("%d", &nota);

  int venceu = 1;

  for (i=0; i< n-1; i++){
    int notaO;
    scanf("%d", &notaO);
    if (notaO > nota )
    
    venceu = 0;
  }
  
  if (venceu==1)
  printf("S\n");
  else 
  printf("N\n");
  return 0;
}
