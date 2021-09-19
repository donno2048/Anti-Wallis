use std::time::Instant;
pub fn benchmark(f: fn(u128) -> f64) -> f64 {
	let mut time_list: Vec<u128> = Vec::new();
	for _ in 0..100 {
		let start = Instant::now();
		f(2);
		time_list.push(start.elapsed().as_millis());
	}
	return mean(&time_list);
}
fn mean(list: &[u128]) -> f64 {
    return list.iter().sum::<u128>() as f64 / list.len() as f64;
}