#include <string>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "021 The Farm Problem.h"
using namespace std;
static void BM(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        int result = animals(a, b, c);
        benchmark::DoNotOptimize(result);
    }
}
static void BM2(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        int result = animals2(a, b, c);
        benchmark::DoNotOptimize(result);
    }
}
static void BM3(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        int result = animals3(a, b, c);
        benchmark::DoNotOptimize(result);
    }
}
static void BM4(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        int result = animals4(a, b, c);
        benchmark::DoNotOptimize(result);
    }
}
static void BM5(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        int result = animals5(a, b, c);
        benchmark::DoNotOptimize(result);
    }
}
static void BM6(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        int result = animals6(a, b, c);
        benchmark::DoNotOptimize(result);
    }
}
static void BM7(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        int result = animals7(a, b, c);
        benchmark::DoNotOptimize(result);
    }
}
static void BM8(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        int result = animals8(a, b, c);
        benchmark::DoNotOptimize(result);
    }
}
static void BM9(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        int result = animals9(a, b, c);
        benchmark::DoNotOptimize(result);
    }
}
static void BM10(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        int result = animals10(a, b, c);
        benchmark::DoNotOptimize(result);
    }
}
static void BM11(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        int result = animals11(a, b, c);
        benchmark::DoNotOptimize(result);
    }
}
static void BM12(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        int result = animals12(a, b, c);
        benchmark::DoNotOptimize(result);
    }
}

static void BM16(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        int result = animals16(a, b, c);
        benchmark::DoNotOptimize(result);
    }
}
static void BM17(benchmark::State& state) {
    // Perform setup here
    int a = state.range(0);
    int b = state.range(1);
    int c = state.range(2);
    for (auto _ : state) {
        // This code gets timed
        int result = animals17(a, b, c);
        benchmark::DoNotOptimize(result);
    }
}
// Register the function as a benchmark
BENCHMARK(BM)->Args({ 5, 2, 8 })->Args({ 3, 4, 7 })->Args({ 1, 2, 3 })->Args({ 3, 5, 2 });
BENCHMARK(BM2)->Args({ 5, 2, 8 })->Args({ 3, 4, 7 })->Args({ 1, 2, 3 })->Args({ 3, 5, 2 });
BENCHMARK(BM3)->Args({ 5, 2, 8 })->Args({ 3, 4, 7 })->Args({ 1, 2, 3 })->Args({ 3, 5, 2 });
BENCHMARK(BM4)->Args({ 5, 2, 8 })->Args({ 3, 4, 7 })->Args({ 1, 2, 3 })->Args({ 3, 5, 2 });
BENCHMARK(BM5)->Args({ 5, 2, 8 })->Args({ 3, 4, 7 })->Args({ 1, 2, 3 })->Args({ 3, 5, 2 });
BENCHMARK(BM6)->Args({ 5, 2, 8 })->Args({ 3, 4, 7 })->Args({ 1, 2, 3 })->Args({ 3, 5, 2 });
BENCHMARK(BM7)->Args({ 5, 2, 8 })->Args({ 3, 4, 7 })->Args({ 1, 2, 3 })->Args({ 3, 5, 2 });
BENCHMARK(BM8)->Args({ 5, 2, 8 })->Args({ 3, 4, 7 })->Args({ 1, 2, 3 })->Args({ 3, 5, 2 });
BENCHMARK(BM9)->Args({ 5, 2, 8 })->Args({ 3, 4, 7 })->Args({ 1, 2, 3 })->Args({ 3, 5, 2 });
BENCHMARK(BM10)->Args({ 5, 2, 8 })->Args({ 3, 4, 7 })->Args({ 1, 2, 3 })->Args({ 3, 5, 2 });
BENCHMARK(BM11)->Args({ 5, 2, 8 })->Args({ 3, 4, 7 })->Args({ 1, 2, 3 })->Args({ 3, 5, 2 });
BENCHMARK(BM12)->Args({ 5, 2, 8 })->Args({ 3, 4, 7 })->Args({ 1, 2, 3 })->Args({ 3, 5, 2 });
BENCHMARK(BM16)->Args({ 5, 2, 8 })->Args({ 3, 4, 7 })->Args({ 1, 2, 3 })->Args({ 3, 5, 2 });
BENCHMARK(BM17)->Args({ 5, 2, 8 })->Args({ 3, 4, 7 })->Args({ 1, 2, 3 })->Args({ 3, 5, 2 });
// Run the benchmark
BENCHMARK_MAIN();