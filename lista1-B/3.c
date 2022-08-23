#include <stdio.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if (x%2!=0) { printf("O PRIMEIRO NUMERO NAO E PAR");
    } else {
        while (y>1) {
            printf("%d ", x);
            x=x+2;
            y--;
        } while (y>0) {
            printf("%d\n", x);
            y--;
          }
    }
    return 0;
}