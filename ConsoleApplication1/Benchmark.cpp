#include <iostream>
#include <string>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "014 Sum of Polygon Angles.h"
using namespace std;
static void BM_SumPolygon(benchmark::State& state) {
    int y = state.range(0);
    for (auto _ : state) {
        int result = sumPolygon(y);
        benchmark::DoNotOptimize(result);
    }
    state.SetLabel(std::to_string(y));
}

BENCHMARK(BM_SumPolygon)->Range(3, 1000);
// Run the benchmark
BENCHMARK_MAIN();
