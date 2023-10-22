#include <iostream>
#include <string>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "007 Remainder from Two Numbers.h"
using namespace std;
static void Benchmark(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = remainder(a, b);
        benchmark::DoNotOptimize(result);
    }
}
// Register the function as a benchmark
BENCHMARK(Benchmark)->Args({ 7,2 })->Args({ 3,4 })->Args({ -9,-45 })->Args({ 5,5 });
// Run the benchmark
BENCHMARK_MAIN();
