#include <benchmark/benchmark.h>
#include <string>
#include "042 Concatenate First and Last Name into One String.h"
using namespace std;

// Predefined test cases
const vector<pair<string, string>> testCases = {
    {"John", "Doe"},
    {"First", "Last"},
    {"A", "B"},
    {",", ","}
};

static void BM(benchmark::State& state) {
    // Get test case based on index
    auto& testCase = testCases[state.range(0)];
    const string& a = testCase.first;
    const string& b = testCase.second;

    for (auto _ : state) {
        // Benchmarking code
        string result = concatName(a, b);
        benchmark::DoNotOptimize(result);
    }
}

// Register the function as a benchmark
BENCHMARK(BM)->Arg(0)->Arg(1)->Arg(2)->Arg(3); // Indices for predefined test cases

// Run the benchmark
BENCHMARK_MAIN();
