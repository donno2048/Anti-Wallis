function sum(x, y) {return x + y;}
export function benchmark(func){
	var results = [], t, i;
	for(i = 0; i < 100; i++) {
		t = new Date().getTime();
		func(2);
		results.push(new Date().getTime() - t);
	}
	return results.reduce(sum) / (results.length * 1000);
}