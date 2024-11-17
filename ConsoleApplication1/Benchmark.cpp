#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "040 Nth Even Number.h"
using namespace std;
static void BMNth(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    //int b = state.range(1);
    //int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        int result = nthEven(a);// , b, c);
        benchmark::DoNotOptimize(result);
    }
}
static void BMPost(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    //int b = state.range(1);
    //int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        int result = Post(a);// , b, c);
        benchmark::DoNotOptimize(result);
    }
}
static void BMPre(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    //int b = state.range(1);
    //int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        int result = Pre(a);// , b, c);
        benchmark::DoNotOptimize(result);
    }
}
// Register the function as a benchmark
BENCHMARK(BMNth)->Args({ 1 })->Args({ 2 })->Args({ 3 })->Args({ 100 })->Args({ 1298734 });
BENCHMARK(BMPre)->Args({ 1 })->Args({ 2 })->Args({ 3 })->Args({ 100 })->Args({ 1298734 });
BENCHMARK(BMPost)->Args({ 1 })->Args({ 2 })->Args({ 3 })->Args({ 100 })->Args({ 1298734 });
// Run the benchmark
BENCHMARK_MAIN();