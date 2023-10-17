#include <iostream>
#include <string>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "002 Next Number from the Integer Passed.h"
using namespace std;
static void additionBenchmark(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    for (auto _ : state) {
        // This code gets timed
        int result = addition(a);
        benchmark::DoNotOptimize(result);
    }
}
static void preincrementationBenchmark(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    for (auto _ : state) {
        // This code gets timed
        int result = preincrementation(a);
        benchmark::DoNotOptimize(result);
    }
}
// Register the function as a benchmark
BENCHMARK(additionBenchmark)->Args({ 2 })->Args({ -9 })->Args({ 0 })->Args({ 999 })->Args({ 73 });
BENCHMARK(preincrementationBenchmark)->Args({ 2 })->Args({ -9 })->Args({ 0 })->Args({ 999 })->Args({ 73 });
// Run the benchmark
BENCHMARK_MAIN();
