# include <stdio.h>
# include <math.h>

double
pi_step(size_t N, double i) {
    double sum = 0.0;
    sum += 4/(1 + pow((i-0.5)/N,2));
    return sum;
}

double
calc_pi(size_t N) {
    double pi = 0;
    double i;
    double h = 1.0/N;
    for(i = 1; i < N; i++){
        pi += pi_step(N, i);
    }
    pi = pi * h;
    printf("pi = %f\n", pi);
    return pi;
}