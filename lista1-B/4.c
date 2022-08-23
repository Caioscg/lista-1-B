#include <stdio.h>
int main(){
    int k, y;
    double s = 0;
    double n;
    k=1;
    scanf("%lf", &n);
    y=n;
    if (n>1 && n==y) {
        while (k<=n) {
            s = s + 1.0/k;
            k++;
        }
        printf("%.6lf", s);
    } else printf("Numero invalido!");
    return 0;
}