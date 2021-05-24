from pi import pi, Wallis
from test import Benchmarker
b = Benchmarker()
b.benchmark(pi, 0)
print("My function takes %f seconds to get: π=%f\nStarting calculating using Wallis to the same precision level..." % (b.result(0), pi(2)))
b.benchmark(Wallis, 1) # Run it and you will understand why it's splited
print("The Wallis function takes %f seconds to get: π=%f" % (b.result(1), Wallis(2)))