#include <string>
#include <vector>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "025 Buggy Code.h"
using namespace std;
static void BM(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    //int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = cubes(a);// , b);
        benchmark::DoNotOptimize(result);
    }
}

// Register the function as a benchmark
BENCHMARK(BM)->Args({2})->Args({3})->Args({4})->Args({5})->Args({10});

// Run the benchmark
BENCHMARK_MAIN();