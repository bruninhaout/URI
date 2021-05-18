#include <stdio.h>
 
int main() {
 
    float s=1, b=2;
    int i;
    for(i=3; i < 40; i++){
        s += i/b;
        i++;
        b*=2;
    }
    printf("%.2f\n", s);
    
 
    return 0;
}
