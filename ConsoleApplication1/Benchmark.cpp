#include <iostream>
#include <string>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "012 Flip the Boolean.h"
using namespace std;
static void BM(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    //int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = reverse(a);
        benchmark::DoNotOptimize(result);
    }
}
// Register the function as a benchmark
BENCHMARK(BM)->Args({ true })->Args({ false });
// Run the benchmark
BENCHMARK_MAIN();
