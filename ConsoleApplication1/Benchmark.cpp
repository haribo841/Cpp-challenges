#include <iostream>
#include <string>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "002 Minutes into Seconds.h"
using namespace std;
static void Benchmark(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    for (auto _ : state) {
        // This code gets timed
        int result = convert(a);
        benchmark::DoNotOptimize(result);
    }
}
// Register the function as a benchmark
BENCHMARK(Benchmark)->Args({ 6 })->Args({ 4 })->Args({ 8 })->Args({ 60 });
// Run the benchmark
BENCHMARK_MAIN();
