#include <stdio.h>
int main () {
    int nl, nc, l, c;
    scanf("%d %d", &nl, &nc);
    for (l=1; l<=nl; l++) {
        for (c=1; c<=nc; c++) {
            if(l==c) break;
            printf("(%d,%d)", l, c);
            if(l>(c+1)&& c<nc) printf("-");
        }
        printf("\n");
    }
 
    return 0;
}