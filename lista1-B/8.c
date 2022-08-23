#include <stdio.h>
    
int main() {
 
    int N, i=1, j=2, k=1;
    scanf("%d", &N);
    if (N==1) printf("Campeonato invalido!\n");
    else { 
        while (i<N) {
            printf("Final %d: Time%d X Time%d\n", k, i, j);
            k++;
            j++;
            if (j>N && i<N) {
                i++;
                j=i+1;
            }    
        }
 
 
 
    }    
    return 0;
}