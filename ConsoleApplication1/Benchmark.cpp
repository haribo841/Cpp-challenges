#include <string>
#include <vector>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "032 Frames Per Second.h"
using namespace std;
static void BM(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = frames(a, b);
        benchmark::DoNotOptimize(result);
    }
}

// Register the function as a benchmark
BENCHMARK(BM)->Args({ 1, 1 })->Args({ 10, 1 })->Args({ 10, 25 })->Args({ 500, 60 })->Args({ 0, 60 })->Args({ 99, 1 })->Args({ 419, 70 })->Args({ 52, 33 });

// Run the benchmark
BENCHMARK_MAIN();