#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);

  int anterior;
  scanf("%d", &anterior);

  int i, posicaoFalha = 0;
  for(i = 1; i < N; i++) {
    int num;
    scanf("%d", &num);

    if(posicaoFalha == 0 && num < anterior) {
      posicaoFalha = i+1;
    }
    anterior = num;
  }

  printf("%d\n", posicaoFalha);

  return 0;
}
