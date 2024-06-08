#include <string>
#include <vector>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "028 Integer is Divisible By Five.h"
using namespace std;
static void BM(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    //int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        bool result = divisibleByFive(a);// , b);
        benchmark::DoNotOptimize(result);
    }
}

// Register the function as a benchmark
BENCHMARK(BM)->Args({7})->Args({5})->Args({15})->Args({33})->Args({-18})->Args({999})->Args({ 2 });

// Run the benchmark
BENCHMARK_MAIN();