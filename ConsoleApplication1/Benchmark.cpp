#include <string>
#include <vector>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "031 Divides Evenly.h"
using namespace std;
static void BM(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        bool result = dividesEvenly(a, b);
        benchmark::DoNotOptimize(result);
    }
}

// Register the function as a benchmark
BENCHMARK(BM)->Args({ 98, 7 })->Args({ 87, 49 })->Args({ 34, 14 })->Args({ 78, 6 })->Args({ 30, 4 })->Args({ 87, 73 })->Args({ 74, 7 })->Args({ 87, 29 })->Args({ 48, 24 })->Args({ 99, 20 })->Args({ 98, 49 })->Args({ 100, 6 })->Args({ 64, 4 })->Args({ 70, 35 })->Args({ 38, 38 })->Args({ 29, 3 })->Args({ 20, 8 })->Args({ 66, 50 })->Args({ 95, 1 })->Args({ 58, 2 });

// Run the benchmark
BENCHMARK_MAIN();