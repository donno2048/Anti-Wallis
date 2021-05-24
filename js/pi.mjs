function factorial(input) {
	var output = 1;
	for (var i = 2; i <= input; i++) {
		output *= i;
	}
	return output;
}
export function pi(precision) {
	var sum = 0, i;
	for (i = 0; i < precision; i++) {
		sum += factorial(12 * i) * (1090280268 * i + 13591409) / (factorial(2 * i) ** 3 * factorial(6 * i) * 640320 ** (6 * i + 1) * Math.sqrt(640320)) - factorial(12 * i + 6) * (1090280268 * i + 558731543) / (factorial(2 * i + 1) ** 3 * factorial(6 * i + 3) * 640320 ** (6 * i + 4) * Math.sqrt(640320));
        /* TOneverDO
         * you might want to use this:
         * sum += (-1) ** i * factorial(6 * i) * (545140134 * i + 13591409) / (factorial(i) ** 3 * factorial(3 * i) * 640320 ** (3 * i + 1.5f));
         * instead, trust me, it's worst in every possible way
         */
    }
    return 1 / (12 * sum);
}
export function Wallis(precision){
    var product = 1, expectation = pi(precision) / 2, i;
    for (i = 0; product <= expectation; i++) {
        /*
         * I know, in order to make sure both functions have the same precision
         * I slowed this function by using mine, but considering how slow this
         * is compared to mine I don't think it is really an issue, and by the
         * way, this is an ideal method to do so because `product` is being
         * incremented each iteration...
         */
        product *= (2 * (i + 1)) ** 2;
        product /= (2 * i + 1) * (2 * i + 3);
    }
    return 2 * product;
}