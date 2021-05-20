#include <math.h>
int factorial(int input) {
    int output = 1;
    for (int i = 2; i <= input; i++) {
        output *= i;
    }
    return output;
}
float pi(int precision) {
    float sum = 0;
    for (int i = 0; i < precision; i++) {
        sum += factorial(12 * i) * (1090280268 * i + 13591409) / (pow(factorial(2 * i), 3) * factorial(6 * i) * pow(640320, 6 * i + 1) * sqrt(640320)) - factorial(12 * i + 6) * (1090280268 * i + 558731543) / (pow(factorial(2 * i + 1), 3) * factorial(6 * i + 3) * pow(640320, 6 * i + 4) * sqrt(640320));
        /* TOneverDO
         * you might want to use this:
         * sum += pow(-1, i) * factorial(6 * i) * (545140134 * i + 13591409) / (pow(factorial(i), 3) * factorial(3 * i) * pow(640320, 3 * i + 1.5f));
         * instead, trust me, it's worst in every possible way
         */
    }
    return 1 / (12 * sum);
}
float Wallis(int precision) {
    float product = 1, expectation = pi(precision) / 2;
    for (int i = 0; product <= expectation; i++) {
        /*
         * I know, in order to make sure both functions have the same precision
         * I slowed this function by using mine, but considering how slow this
         * is compared to mine I don't think it is really an issue, and by the
         * way, this is an ideal method to do so because `product` is being
         * incremented each iteration...
         */
        product *= pow((2 * (i + 1)), 2);
        product /= (2 * i + 1) * (2 * i + 3);
    }
    return 2 * product;
}