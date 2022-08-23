#include <stdio.h>
int main () {
    int n, x, i=1, y=0, k;
    scanf("%d", &n);
    while (i<=n) {
        x=2*y + 1;
        printf("%d*%d*%d = %d", i, i, i, x);
        i++;
        k=i;
        y++;
        while (k>2) {
            x=2*y+1;
            printf("+%d", x);
            y++;
            k--;
        }
        printf("\n");
    }
    return 0;
}