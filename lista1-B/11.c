#include <stdio.h>  
int main () {
    int i=0, t, a, b, a1, a2, a3, b1, b2, b3, A, B;
    scanf("%d", &t);
    while (i<t) {
        scanf("%d %d\n", &a, &b);
        i++;
        a1=a/100;
        a2=(a%100)/10;
        a3=a%10;
        b1=b/100;
        b2=(b%100)/10;
        b3=b%10;
        A=(a3*100)+(a2*10)+a1;
        B=(b3*100)+(b2*10)+b1;
        if (A>B) printf("%d\n", A);
        else printf("%d\n", B);
    }
 
    return 0;
}