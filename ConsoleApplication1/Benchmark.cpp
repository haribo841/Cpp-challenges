#include <vector>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "035 Time for Milk and Cookies.h".h"
using namespace std;
static void BM(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        int result = timeForMilkAndCookies(a, b, c);
        benchmark::DoNotOptimize(result);
    }
}

// Register the function as a benchmark
BENCHMARK(BM)->Args({ 2013, 11, 24 })->Args({ 2013, 0, 23 })->Args({ 3000, 11, 24 });

// Run the benchmark
BENCHMARK_MAIN();