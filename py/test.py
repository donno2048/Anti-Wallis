from time import time
from typing import Callable
class Benchmarker():
	def __init__(self):
		self.results = {}
	def benchmark(self, func: Callable[[int], float], name) -> None:
		for _ in range(100):
			t = time()
			func(2)
			delta = time() - t
			try:
				self.results[name] += [delta]
			except KeyError:
				self.results[name] = [delta]
	def result(self, name) -> float:
		cur_list = self.results[name]
		return sum(cur_list) / len(cur_list)