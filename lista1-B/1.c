#include <stdio.h>
int main(){
    int n, c;
    double  F, C;
    scanf("%d", &n);
    while (n>=1) {
        scanf("%lf", &F);
        C = 5*(F-32)/9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", F, C);
        n--;
    }
 
    return 0;
}