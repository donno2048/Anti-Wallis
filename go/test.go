package main
import "time"
func benchmark(f func(int) float64) float64 {
	const iters = 100
	var result float64 = 0
	for i := 0; i < iters; i++ {
		t := time.Now()
		f(2)
		result += time.Now().Sub(t).Seconds()
	}
	return result / (1000 * iters)
}