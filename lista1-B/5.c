#include <stdio.h>
int main(){
    int n, k;
    unsigned long int  f = 1;
    scanf("%d", &n);
    k = n;
    while (k>1) {
        f = f * k;
        k = k - 1; 
    } printf("%d! = %lu\n", n, f);
    return 0;
}