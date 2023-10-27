#include <benchmark/benchmark.h>
#include "011 Return Something to Me.h"

static void BM1(benchmark::State& state) {
    for (auto _ : state) {
        std::string input = "a";
        std::string result = giveMeSomething(input);
        benchmark::DoNotOptimize(result);
    }
}

BENCHMARK(BM1);

static void BM2(benchmark::State& state) {
    for (auto _ : state) {
        std::string input = "is cooking";
        std::string result = giveMeSomething(input);
        benchmark::DoNotOptimize(result);
    }
}

BENCHMARK(BM2);

static void BM3(benchmark::State& state) {
    for (auto _ : state) {
        std::string input = " is cooking";
        std::string result = giveMeSomething(input);
        benchmark::DoNotOptimize(result);
    }
}

BENCHMARK(BM3);

static void BM1b(benchmark::State& state) {
    for (auto _ : state) {
        std::string input = "a";
        std::string result = giveMeSomething2(input);
        benchmark::DoNotOptimize(result);
    }
}

BENCHMARK(BM1b);

static void BM2b(benchmark::State& state) {
    for (auto _ : state) {
        std::string input = "is cooking";
        std::string result = giveMeSomething2(input);
        benchmark::DoNotOptimize(result);
    }
}

BENCHMARK(BM2b);

static void BM3b(benchmark::State& state) {
    for (auto _ : state) {
        std::string input = " is cooking";
        std::string result = giveMeSomething2(input);
        benchmark::DoNotOptimize(result);
    }
}

BENCHMARK(BM3b);
BENCHMARK_MAIN();
