#include <iostream>
#include <string>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "009 Less Than 100.h"
using namespace std;
static void Benchmark(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = lessThan100(a,b);
        benchmark::DoNotOptimize(result);
    }
}
// Register the function as a benchmark
BENCHMARK(Benchmark)->Args({ 5, 57 })->Args({ 77, 30 })->Args({ 0, 59 })->Args({ 78, 35 })->Args({ 63, 11 })->Args({ 52, 11 })->Args({ 82, 95 })->Args({ 17, 44 })->Args({ 74, 53 })->Args({ 3, 77 })->Args({ 25, 80 })->Args({ 59, 28 })->Args({ 69, 87 })->Args({ 10, 45 })->Args({ 43, 58 })->Args({ 50, 44 })->Args({ 74, 89 })->Args({ 3, 27 })->Args({ 21, 79 });
// Run the benchmark
BENCHMARK_MAIN();
