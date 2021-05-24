import {pi, Wallis} from './pi.mjs';
import {benchmark} from './test.mjs';
console.log(`My function takes ${benchmark(pi)} seconds to get: π=${pi(2)}\nStarting calculating using Wallis to the same precision level...`)
console.log(`The Wallis function takes ${benchmark(Wallis)} seconds to get: π=${Wallis(2)}`) // Run it and you will understand why it's splited