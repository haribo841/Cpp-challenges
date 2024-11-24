#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "043 Area of a Rectangle.h"
using namespace std;
static void BM(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = area(a , b);//, c);
        benchmark::DoNotOptimize(result);
    }
}

// Register the function as a benchmark
BENCHMARK(BM)
->Args({ 5, 3 })
->Args({ 8, 5 })
->Args({ 5, 4 })
->Args({ 2, 3 })
->Args({ -2, -5 })
->Args({ 0, 3 })
->Args({ 5, -3 })
->Args({ 0, 1 })
->Args({ -1, 0 })
->Args({ 10000, 10000 });

// Run the benchmark
BENCHMARK_MAIN();