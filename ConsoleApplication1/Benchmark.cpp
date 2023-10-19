#include <iostream>
#include <string>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "004 Circuit Power Calculator.h"
using namespace std;
static void Benchmark(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = circuitPower(a, b);
        benchmark::DoNotOptimize(result);
    }
}
// Register the function as a benchmark
BENCHMARK(Benchmark)->Args({ 230, 10 })->Args({ 480, 20 })->Args({ 110, 3 })->Args({ 13800, 276 });
// Run the benchmark
BENCHMARK_MAIN();
