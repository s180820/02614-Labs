#include <stdio.h>
#include "pi.h"

#ifdef _OPENMP
#include <omp.h>
#endif

int
main(int argc, size_t N) {

    if (argc != 2){
        printf("Requires only one argument\n");
        return 1;
    }
    double start, end; 

    double pi = calc_pi(N);
    return 0;
}