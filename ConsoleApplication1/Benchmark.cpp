#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "044 Empty String.h"
using namespace std;
// Predefined test cases
const vector<string> testCases = {
    "",
    " ",
    "            ",
    "38215",
    "afjabsdf",
    "!?@&",
};
static void BM(benchmark::State& state) {
    // Get test case based on index
    const auto& testCase = testCases[state.range(0)];

    for (auto _ : state) {
        // Benchmarking code
        bool result = isEmpty(testCase);
        benchmark::DoNotOptimize(result);
    }
}

// Register the function as a benchmark
BENCHMARK(BM)->Arg(0)->Arg(1)->Arg(2)->Arg(3)->Arg(4)->Arg(5); // Indices for predefined test cases

// Run the benchmark
BENCHMARK_MAIN();