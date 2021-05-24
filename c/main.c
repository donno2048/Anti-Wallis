#include <stdio.h>
#include "pi.h"
#include "test.h"
int main() {
    for(int i = 0; i < 100; i++) {
        benchmark(pi, 0); // my function
        benchmark(Wallis, 1); // the wallis function
    }
    printf("My function takes %f seconds to get: π=%f\n", benchmark0, pi(2));
    printf("The Wallis function takes %f seconds to get: π=%f\n", benchmark1, Wallis(2));
    return 0;
}