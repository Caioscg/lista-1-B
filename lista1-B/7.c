#include <stdio.h>
 
int main () {
 
    int n, spar, simpar, i, k;
    double mpar, mimpar;
    n=1;
    spar=0;
    simpar=0;
    i=-1;
    k=0;
    while (n!=0) {
        scanf("%d", &n);
        if (n%2==0) {
            spar=spar+n;
            i++;
        }
        if (n%2!=0) {
            simpar=simpar+n;
            k++;
        }
    }
    if (i!=0) {
        mpar=(double)spar/i;
    }
    if (k!=0) {
        mimpar=(double)simpar/k;
    }
    printf("MEDIA PAR: %lf\nMEDIA IMPAR: %lf\n", mpar, mimpar);
    return 0;
}
 