#include <stdio.h>
#include <math.h>
int main () {
    int N, k=0, fat, fatv=1, k2;
    double x, y, e, e1;
    scanf("%lf %d", &x, &N);
    while(k<=N) {
        k2=k;
        if(k==0) fatv=1;
        else {
            while (k2>0) {
                fat=1;
                fat=fat*k2;
                k2--;
                fatv= fat * fatv;
            }
        }
        e = e1 + (pow(x , k))/fatv;
        e1=e;
        k++;
        fatv=1;
    }
    printf("e^%.2lf = %.6lf", x, e);
    
    return 0;
}