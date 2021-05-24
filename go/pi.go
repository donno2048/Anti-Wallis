package main
import "math"
func factorial(input int) float64 {
	output := 1
	for i := 2; i <= input; i++ {
		output *= i
	}
	return float64(output)
}
func pi(precision int) float64 {
	var sum float64 = 0
	for i := 0; i < precision; i++ {
		sum += factorial(12 * i) * float64(1090280268 * i + 13591409) / (math.Pow(factorial(2 * i), 3) * factorial(6 * i) * math.Pow(640320, float64(6 * i + 1)) * math.Sqrt(640320)) - factorial(12 * i + 6) * float64(1090280268 * i + 558731543) / (math.Pow(factorial(2 * i + 1), 3) * factorial(6 * i + 3) * math.Pow(640320, float64(6 * i + 4)) * math.Sqrt(640320));
		/*
		 * TOneverDO
		 * you might want to use this:
		 * sum += math.Pow(-1, i) * factorial(6 * i) * (545140134 * i + 13591409) / (math.Pow(factorial(i), 3) * factorial(3 * i) * math.Pow(640320, 3 * i + 1.5f))
		 * instead, trust me, it's worst in every possible way
		 */
	}
	return 1 / (12 * sum)
}
func Wallis(precision int) float64 {
	var product float64 = 1
	expectation := pi(precision) / 2
	for i := 0; product <= expectation; i++ {
		/*
		 * I know, in order to make sure both functions have the same precision
		 * I slowed this function by using mine, but considering how slow this
		 * is compared to mine I don't think it is really an issue, and by the
		 * way, this is an ideal method to do so because `product` is being
		 * incremented each iteration...
		 */
		product *= math.Pow(float64(2 * (i + 1)), 2)
		product /= float64(2 * i + 1) * float64(2 * i + 3)
    }
    return 2 * product
}