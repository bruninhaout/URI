#include <stdio.h>
#include <string.h>

int main()
{
    char codigo[4];
    int soma = 0;
    int i;
    for(i = 0; i < 3; ) {
        scanf("%s", codigo);
        if(codigo[0] == '*')
            soma += 4;
        if(codigo[1] == '*')
            soma += 2;
        if(codigo[2] == '*')
            soma += 1;
        if(strcmp(codigo, "caw") == 0) {
            printf("%d\n", soma);
            scanf("%s", codigo);
            i++;
            soma = 0;
        }
    }
    return 0;
}
