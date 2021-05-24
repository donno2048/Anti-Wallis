package main
import "fmt"
func main() {
	fmt.Printf("My function takes %f seconds to get: π=%f\nStarting calculating using Wallis to the same precision level...\n", benchmark(pi), pi(2));
	fmt.Printf("The Wallis function takes %f seconds to get: π=%f\n", benchmark(Wallis), Wallis(2)); // Run it and you will understand why it's splited
}