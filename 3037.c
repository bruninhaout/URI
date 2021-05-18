#include <stdio.h>

int main() {
  int N, i;
  scanf("%d", &N);
  for(i = 1; i <= N; i++) {
    int x, d, pontuacaoJoao = 0, pontuacaoMaria = 0;
    scanf("%d %d", &x, &d);
    pontuacaoJoao = pontuacaoJoao + x * d;

    scanf("%d %d", &x, &d);
    pontuacaoJoao = pontuacaoJoao + x * d;
    
    scanf("%d %d", &x, &d);
    pontuacaoJoao = pontuacaoJoao + x * d;
    
    scanf("%d %d", &x, &d);
    pontuacaoMaria = pontuacaoMaria + x * d;
    
    scanf("%d %d", &x, &d);
    pontuacaoMaria = pontuacaoMaria + x * d;
    
    scanf("%d %d", &x, &d);
    pontuacaoMaria = pontuacaoMaria + x * d;
    
    if(pontuacaoJoao > pontuacaoMaria)
      printf("JOAO\n");
    else 
      printf("MARIA\n");
  }
  return 0;
}
