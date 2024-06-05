#include <string>
#include <vector>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "027 Inches to Feet.h"
using namespace std;
static void BM(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    //int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = inchesToFeet(a);// , b);
        benchmark::DoNotOptimize(result);
    }
}

// Register the function as a benchmark
BENCHMARK(BM)->Args({12})->Args({360})->Args({3612})->Args({324})->Args({3012})->Args({ 11 });

// Run the benchmark
BENCHMARK_MAIN();