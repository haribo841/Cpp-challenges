#include <iostream>
#include <string>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "010 Are the Numbers Equal.h"
using namespace std;
static void Benchmark(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = isSameNum(a,b);
        benchmark::DoNotOptimize(result);
    }
}
// Register the function as a benchmark
BENCHMARK(Benchmark)->Args({ 4,8 })->Args({ 2,2 })->Args({ 0,8 })->Args({ 1,1 })->Args({ 12,3 })->Args({ 5,98 });
// Run the benchmark
BENCHMARK_MAIN();