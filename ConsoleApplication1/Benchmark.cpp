#include <string>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "022 Football Points.h"
using namespace std;
static void BM(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        int result = footballPoints(a, b, c);
        benchmark::DoNotOptimize(result);
    }
}
static void BM2(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        int result = footballPoints2(a, b, c);
        benchmark::DoNotOptimize(result);
    }
}
// Register the function as a benchmark
BENCHMARK(BM)->Args({ 0, 7, 0 })->Args({ 0, 0, 15 })->Args({ 1, 0, 0 })->Args({ 5, 5, 5 })->Args({ 1, 2, 3 });
BENCHMARK(BM2)->Args({ 0, 7, 0 })->Args({ 0, 0, 15 })->Args({ 1, 0, 0 })->Args({ 5, 5, 5 })->Args({ 1, 2, 3 });
// Run the benchmark
BENCHMARK_MAIN();