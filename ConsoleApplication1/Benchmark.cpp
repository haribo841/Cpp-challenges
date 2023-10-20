#include <iostream>
#include <string>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "005 Convert Age to Days.h"
using namespace std;
static void Benchmark(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    //int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = calc_age(a);
        benchmark::DoNotOptimize(result);
    }
}
// Register the function as a benchmark
BENCHMARK(Benchmark)->Args({ 10 })->Args({ 0 })->Args({ 73 })->Args({ 56 })->Args({ 18 })->Args({ 21 })->Args({ 65 });
// Run the benchmark
BENCHMARK_MAIN();
