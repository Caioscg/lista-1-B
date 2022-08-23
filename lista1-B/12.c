#include <stdio.h>
int main () {
    int n, c1=3, c2=4, i=0, h=5;
    scanf("%d", &n);
    while (h<=n) {
        while (c1<n) {
            while (c2<n) {
                if ((c1*c1 + c2*c2) == h*h)
                    if (c1<=c2)
                    printf("hipotenusa = %d, catetos %d e %d\n", h, c1, c2);
                    c2++;
            }   
            c1++;
            c2=4;
        }
        c1=3;
        h++;
    }
 
    return 0;
}