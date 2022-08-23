#include <stdio.h>
#include <math.h>
 
int main () {
    int N, k=0, n, k2;
    double x, y, cos, cos1=0;
    int fatv=1, fat;
    scanf("%lf %d", &x, &N);
    while (k<=N) {
        k2=2*k;
        if (k2==0) fatv=1;
        else {
            while (k2>0) {
                fat=1;
                fat=fat*k2;
                k2--;
                fatv=fat * fatv;
            }  
        }     
        cos = cos1 + ((pow(-1 , k)*pow(x , (2*k)))/fatv);
        cos1=cos;
        k++;
        fatv=1;
    }    
    
    printf("cos(%.2lf) = %.6lf\n", x, cos);
    return 0;
}
