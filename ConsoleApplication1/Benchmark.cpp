#include <iostream>
#include <string>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "008 Less than or Equal to Zero.h"
using namespace std;
static void Benchmark(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    //int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = lessThanOrEqualToZero(a);
        benchmark::DoNotOptimize(result);
    }
}
static void Benchmark2(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    //int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = lessThanOrEqualToZero2(a);
        benchmark::DoNotOptimize(result);
    }
}
static void Benchmark3(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    //int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = lessThanOrEqualToZero3(a);
        benchmark::DoNotOptimize(result);
    }
}
static void Benchmark4(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    //int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = lessThanOrEqualToZero4(a);
        benchmark::DoNotOptimize(result);
    }
}
static void Benchmark5(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    //int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = lessThanOrEqualToZero5(a);
        benchmark::DoNotOptimize(result);
    }
}
static void Benchmark6(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    //int b = state.range(1);
    for (auto _ : state) {
        // This code gets timed
        int result = lessThanOrEqualToZero6(a);
        benchmark::DoNotOptimize(result);
    }
}
// Register the function as a benchmark
BENCHMARK(Benchmark)->Args({ 5 })->Args({ 0 })->Args({ -5 })->Args({ 1 })->Args({ 2 })->Args({ 10000 })->Args({ 1 });
BENCHMARK(Benchmark2)->Args({ 5 })->Args({ 0 })->Args({ -5 })->Args({ 1 })->Args({ 2 })->Args({ 10000 })->Args({ 1 });
BENCHMARK(Benchmark3)->Args({ 5 })->Args({ 0 })->Args({ -5 })->Args({ 1 })->Args({ 2 })->Args({ 10000 })->Args({ 1 });
BENCHMARK(Benchmark4)->Args({ 5 })->Args({ 0 })->Args({ -5 })->Args({ 1 })->Args({ 2 })->Args({ 10000 })->Args({ 1 });
BENCHMARK(Benchmark5)->Args({ 5 })->Args({ 0 })->Args({ -5 })->Args({ 1 })->Args({ 2 })->Args({ 10000 })->Args({ 1 });
BENCHMARK(Benchmark6)->Args({ 5 })->Args({ 0 })->Args({ -5 })->Args({ 1 })->Args({ 2 })->Args({ 10000 })->Args({ 1 });
// Run the benchmark
BENCHMARK_MAIN();
