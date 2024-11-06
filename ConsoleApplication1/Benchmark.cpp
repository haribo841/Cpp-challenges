#include <vector>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "034 Multiple of 100.h"
using namespace std;

static void BM(benchmark::State& state) {
    // Perform setup here
    //float a = static_cast<float>(state.range(0)) / 100.0f;
    int a = state.range(0);
    //int c = static_cast<double>(state.range(2)) / 100.0;

    for (auto _ : state) {
        // This code gets timed
        bool result = divisibleByHundred(a);// , b, c);
        benchmark::DoNotOptimize(result);
    }
}

// Register the function as a benchmark
BENCHMARK(BM)
->Args({ 1 })
->Args({ 100 })
->Args({ 1000 })
->Args({ 111000 })
->Args({ -1 })
->Args({ 0 })
->Args({ -100 });

// Run the benchmark
BENCHMARK_MAIN();
