#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "040 Nth Even Number.h"
using namespace std;
static void BM(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    //int b = state.range(1);
    //int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        int result = nthEven(a);// , b, c);
        benchmark::DoNotOptimize(result);
    }
}

// Register the function as a benchmark
BENCHMARK(BM)->Args({ 1 })->Args({ 2 })->Args({ 3 })->Args({ 100 })->Args({ 1298734 });

// Run the benchmark
BENCHMARK_MAIN();