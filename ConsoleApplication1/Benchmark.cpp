#include <iostream>
#include <string>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "015 Are the Numbers Equal.h"
using namespace std;
static void BM(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = isEqual(a,b);
        benchmark::DoNotOptimize(result);
    }
}
// Register the function as a benchmark
BENCHMARK(BM)->Args({ 2,2 })->Args({ 88,88 })->Args({ 36,35 })->Args({ 1,1 })->Args({ 5,6 });
// Run the benchmark
BENCHMARK_MAIN();
