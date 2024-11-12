#include <vector>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "038 Buggy Code 2.h"
using namespace std;
static void BM(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    //int b = state.range(1);
    //int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        std::vector<int> result = printArray(a);// , b, c);
        benchmark::DoNotOptimize(result);
    }
}

// Register the function as a benchmark
BENCHMARK(BM)->Range(1, 10);

// Run the benchmark
BENCHMARK_MAIN();