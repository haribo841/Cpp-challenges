#include <vector>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "037 Stack the Boxes.h"
using namespace std;
static void BM(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    //int b = state.range(1);
    //int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        int result = stackBoxes(a);// , b, c);
        benchmark::DoNotOptimize(result);
    }
}

// Register the function as a benchmark
BENCHMARK(BM)->Args({ 1 })->Args({ 2 })->Args({ 0 })->Args({ 5 })->Args({ 27 })->Args({ 196 })->Args({ 512 });

// Run the benchmark
BENCHMARK_MAIN();