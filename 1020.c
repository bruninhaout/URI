#include <stdio.h>

int main(void) {
  int dias;
  scanf("%d", &dias);
  int ano = dias/365;
  dias = dias%365; 
  int meses = dias/30;
  dias = dias%30;

  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, meses, dias);
  return 0;
}
