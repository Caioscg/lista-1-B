#include <stdio.h>
int main () {
    int n, x=1, i, t=1;
    scanf ("%d", &n);
    printf("%d = %d ", n, x);
    while (x<n-1) {
        x++;
        if (n%x==0) {
        printf("+ %d ", x);
        t+=x;
        }
    }
    if (t==n)
    printf("= %d (NUMERO PERFEITO)\n", t);
    else 
    printf("= %d (NUMERO NAO E PERFEITO)\n", t);
    
    return 0;
}