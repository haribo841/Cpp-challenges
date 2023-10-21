#include <iostream>
#include <string>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "006 Area of a Triangle.h"
using namespace std;
static void TriBenchmark(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = triArea(a, b);
        benchmark::DoNotOptimize(result);
    }
}
static void BitBenchmark(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = bitArea(a,b);
        benchmark::DoNotOptimize(result);
    }
}
// Register the function as a benchmark
BENCHMARK(TriBenchmark)->Args({ 3,2 })->Args({ 5,4 })->Args({ 10,10 })->Args({ 0,60 })->Args({ 12,11 });
BENCHMARK(BitBenchmark)->Args({ 3,2 })->Args({ 5,4 })->Args({ 10,10 })->Args({ 0,60 })->Args({ 12,11 });
// Run the benchmark
BENCHMARK_MAIN();
