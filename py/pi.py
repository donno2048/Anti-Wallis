from math import sqrt
def factorial(input: int) -> int:
	output = 1
	for i in range(2, input + 1):
		output *= i
	return output
def pi(precision: int) -> float:
	sum = 0
	for i in range(precision):
		sum += factorial(12 * i) * (1090280268 * i + 13591409) / (factorial(2 * i) ** 3 * factorial(6 * i) * 640320 ** (6 * i + 1) * sqrt(640320)) - factorial(12 * i + 6) * (1090280268 * i + 558731543) / (factorial(2 * i + 1) ** 3 * factorial(6 * i + 3) * 640320 ** (6 * i + 4) * sqrt(640320))
		# TOneverDO
		'''
		you might want to use this:
		sum += (-1) ** i * factorial(6 * i) * (545140134 * i + 13591409) / (factorial(i) ** 3 * factorial(3 * i) * 640320 ** (3 * i + 1.5f))
		instead, trust me, it's worst in every possible way
		'''
	return 1 / (12 * sum)
def Wallis(precision: int) -> float:
	product, expectation, i = 1, pi(precision) / 2, 0
	while(product <= expectation):
		'''
		I know, in order to make sure both functions have the same precision
		I slowed this function by using mine, but considering how slow this
		is compared to mine I don't think it is really an issue, and by the
		way, this is an ideal method to do so because `product` is being
		incremented each iteration...
		'''
		product *= (2 * (i + 1)) ** 2
		product /= (2 * i + 1) * (2 * i + 3)
		i += 1
	return 2 * product