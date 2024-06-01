#include <string>
#include <vector>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "026 Maximum Edge of a Triangle.h"
using namespace std;
static void BM(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = nextEdge(a, b);
        benchmark::DoNotOptimize(result);
    }
}

// Register the function as a benchmark
BENCHMARK(BM)->Args({5, 4})->Args({8, 3})->Args({7, 9})->Args({10, 4})->Args({7, 2});

// Run the benchmark
BENCHMARK_MAIN();