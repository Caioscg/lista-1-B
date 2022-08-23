#include <stdio.h>
int main(){
    int N, r, i;
    scanf("%d", &N);
    i=2;
    if (N>5 && N<2000) {
        while (i<=N) {
            r = i*i;
            printf("%d^2 = %d\n", i, r);
            i=i+2;
        }
 
    }
 
    return 0;
}