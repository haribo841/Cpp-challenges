#include <iostream>
#include <string>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "013 Convert Hours into Seconds.h"
using namespace std;
static void BM(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    //int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = howManySeconds(a);
        benchmark::DoNotOptimize(result);
    }
}
static void BM2(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    //int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = howManySeconds2(a);
        benchmark::DoNotOptimize(result);
    }
}
// Register the function as a benchmark
BENCHMARK(BM)->Args({ 2 })->Args({ 10 })->Args({ 24 })->Args({ 36 });
BENCHMARK(BM2)->Args({ 2 })->Args({ 10 })->Args({ 24 })->Args({ 36 });
// Run the benchmark
BENCHMARK_MAIN();
