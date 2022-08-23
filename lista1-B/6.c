#include <stdio.h>
    
int main() {
 
    int n, tamMax=0, tamAtual=1, elemAtual, elemAnt, i=2;
    scanf("%d", &n);
    scanf("%d", &elemAtual);
    while (i<=n) {
        elemAnt=elemAtual;
        scanf("%d", &elemAtual);
        if(elemAtual>elemAnt) {
            tamAtual++;
        }
        else { 
            tamMax=tamAtual;
            tamAtual=1;
        }
        i++;
    }
    if (tamAtual>tamMax) tamMax=tamAtual;
    printf("O comprimento do segmento crescente maximo e: %d\n", tamMax);
 
    return 0;
}