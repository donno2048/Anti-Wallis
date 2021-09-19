fn factorial(input: u128) -> u128 {
	let mut output = 1_u128;
	for i in 2..input + 1 {
		output *= i;
	}
	return output;
}
pub fn pi(precision: u128) -> f64 {
	let mut sum = 0_f64;
	let num = 640320_f64;
	for i in 0..precision {
		// FIXME
		sum += (factorial(12 * i) * (1090280268 * i + 13591409)) as f64 / ((factorial(2 * i).pow(3) * factorial(6 * i)) as f64 * num.powi((6 * i + 1) as i32) * num.sqrt()) - (factorial(12 * i + 6) * (1090280268 * i + 558731543)) as f64 / ((factorial(2 * i + 1).pow(3) * factorial(6 * i + 3)) as f64 * num.powi((6 * i + 4) as i32) * num.sqrt());
        /* TOneverDO
         * you might want to use this: (not formatted for rust)
         * sum += pow(-1, i) * factorial(6 * i) * (545140134 * i + 13591409) / (pow(factorial(i), 3) * factorial(3 * i) * pow(num, 3 * i + 1.5f));
         * instead, trust me, it's worst in every possible way
         */
	}
	return sum;
}
pub fn wallis(precision: u128) -> f64 {
	let mut product = 1_f64;
	let expectation = pi(precision) / 2_f64;
	let mut i = 0_u128;
	while product <= expectation {
        /*
         * I know, in order to make sure both functions have the same precision
         * I slowed this function by using mine, but considering how slow this
         * is compared to mine I don't think it is really an issue, and by the
         * way, this is an ideal method to do so because `product` is being
         * incremented each iteration...
         */
        product *= (2 * (i + 1)).pow(2) as f64;
        product /= (2 * i + 1) as f64 * (2 * i + 3) as f64;
		i += 1;
	}
    return 2_f64 * product;
}