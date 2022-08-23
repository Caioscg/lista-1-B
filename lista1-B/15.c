#include <stdio.h>
int main () {
    int n, i=0, x=220, y=284, k=0, t=0, m=0, I=0;
    scanf("%d", &n);
    if (n<9) {
 
        while (I<n) {
 
            while (y<1211) {
 
                while (k<x) {
                    k++;
                    if (x%k==0) 
                        t+=k;
                }
                while (i<y) {
                    i++;
                    if (y%i==0) 
                        m+=i;
                }
                if (t==y && m==x)  {
                    printf("(%d,%d)", x, y);
                    I++;
                }
                y++;
            }
            y=284;
            x++;
        }
 
    }
    return 0;
}
