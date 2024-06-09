#include <string>
#include <vector>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "029 Correct the Mistakes.h"
using namespace std;
static void BM(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    //int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        bool result = squaed(a);// , b);
        benchmark::DoNotOptimize(result);
    }
}

// Register the function as a benchmark
BENCHMARK(BM)->Args({ 10 })->Args({ 69 })->Args({ 666 })->Args({ -21 })->Args({ 21 });

// Run the benchmark
BENCHMARK_MAIN();