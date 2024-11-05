#include <vector>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "033 Profitable Gamble.h"
using namespace std;

static void BM(benchmark::State& state) {
    // Perform setup here
    float a = static_cast<float>(state.range(0)) / 100.0f;
    int b = state.range(1);
    int c = static_cast<double>(state.range(2)) / 100.0;

    for (auto _ : state) {
        // This code gets timed
        bool result = profitableGamble(a, b, c);
        benchmark::DoNotOptimize(result);
    }
}

// Register the function as a benchmark
BENCHMARK(BM)
->Args({ 20, 50, 900 })
->Args({ 90, 1, 200 })
->Args({ 9, 3, 200 })
->Args({ 33, 10, 330 })
->Args({ 0, 1000, 1 })
->Args({ 1, 1000, 700 })
->Args({ 0, 0, 0 });

// Run the benchmark
BENCHMARK_MAIN();
