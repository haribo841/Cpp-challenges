#include <iostream>
#include <string>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "018 Basketball Points.h"
using namespace std;
static void Benchmark(benchmark::State& state) {
    // Perform setup here
    bool a = state.range(0);
    bool b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        bool result = points(a,b);
        benchmark::DoNotOptimize(result);
    }
}
static void Benchmark2(benchmark::State& state) {
    // Perform setup here
    bool a = state.range(0);
    bool b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        bool result = points2(a, b);
        benchmark::DoNotOptimize(result);
    }
}
// Register the function as a benchmark
BENCHMARK(Benchmark)->Args({ 1, 1 })->Args({ 1, 2 })->Args({ 2, 1 })->Args({ 2, 2 })->Args({ 69, 420 });
BENCHMARK(Benchmark2)->Args({ 1, 1 })->Args({ 1, 2 })->Args({ 2, 1 })->Args({ 2, 2 })->Args({ 69, 420 });
// Run the benchmark
BENCHMARK_MAIN();