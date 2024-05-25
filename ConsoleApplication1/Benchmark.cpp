#include <string>
#include <vector>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "023 First Element in an Array.h"
using namespace std;
static void BM(benchmark::State& state) {
    // Perform setup here
    vector<int> a;
    for (int i = 0; i < state.range(0); ++i) {
        a.push_back(i); // Dodaj przykładowe dane do wektora
    }
    for (auto _ : state) {
        // This code gets timed
        int result = getFirstValue(a);
        benchmark::DoNotOptimize(result);
    }
}

// Register the function as a benchmark
BENCHMARK(BM)->Args({ 1, 2, 3 })->Args({ 80, 5, 100 })->Args({ -500, 0, 50 })->Args({ 75675, 5, 100 })->Args({ -52320, 0, 50 });

// Run the benchmark
BENCHMARK_MAIN();