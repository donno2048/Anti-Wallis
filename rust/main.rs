mod test;
mod pi;
fn main() {
	println!("My function takes {} milliseconds to get: π={}\n", test::benchmark(pi::pi), pi::pi(2));
	println!("The Wallis function takes {} milliseconds to get: π={}\n", test::benchmark(pi::wallis), pi::wallis(2));
}