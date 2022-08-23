    #include <stdio.h>
    double my_sqrt (double n, double err);
    int main () {
        double r, n, E;
        scanf("%lf %lf", &n, &E);
        r= my_sqrt(n,E);
        return 0;
    } 
    double my_sqrt (double n, double err) {
        double error, r, rant;
        rant=1;
        error=n -rant*rant;
        if (error<0) error=-error;
        while (error>err) {
            r=(rant + n/rant)/2;
            error = n-r*r;
            if(error<0) error = -error;
            rant=r;
            printf("r: %.9lf, err: %.9lf\n", r, error);
        }
        return r;
 
        return 0;
    }