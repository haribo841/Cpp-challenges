#include <iostream>
#include <string>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "017 Using the And Operator.h"
using namespace std;
static void Benchmark(benchmark::State& state) {
    // Perform setup here
    bool a = state.range(0);
    bool b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        bool result = andAnd(a,b);
        benchmark::DoNotOptimize(result);
    }
}
// Register the function as a benchmark
BENCHMARK(Benchmark)->Args({ true, true })->Args({ false, true })->Args({ true, false })->Args({ false, false });
// Run the benchmark
BENCHMARK_MAIN();