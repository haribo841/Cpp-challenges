#include <iostream>
#include <string>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "019 Perimeter of a Rectangle.h"
using namespace std;
static void Benchmark(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = findPerimeter(a,b);
        benchmark::DoNotOptimize(result);
    }
}
static void Benchmark2(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = findPerimeter2(a, b);
        benchmark::DoNotOptimize(result);
    }
}
static void Benchmark3(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = findPerimeter3(a, b);
        benchmark::DoNotOptimize(result);
    }
}
static void Benchmark4(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = findPerimeter4(a, b);
        benchmark::DoNotOptimize(result);
    }
}
// Register the function as a benchmark
BENCHMARK(Benchmark)->Args({ 6, 7 })->Args({ 20, 10 })->Args({ 2, 9 });
BENCHMARK(Benchmark2)->Args({ 6, 7 })->Args({ 20, 10 })->Args({ 2, 9 });
BENCHMARK(Benchmark3)->Args({ 6, 7 })->Args({ 20, 10 })->Args({ 2, 9 });
BENCHMARK(Benchmark4)->Args({ 6, 7 })->Args({ 20, 10 })->Args({ 2, 9 });
// Run the benchmark
BENCHMARK_MAIN();