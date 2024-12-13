#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include <vector>
#include <string>
#include "046 String Odd or Even.h"
using namespace std;
// Predefined test cases
const vector<string> testCases = {
    "apples",
    "banana",
    "cherry",
    "mango",
    "peach",
    "pears",
};
static void BM(benchmark::State& state) {
    // Get test case based on index
    const auto& testCase = testCases[state.range(0)];
    //const string& a = testCase.first;
    //const string& b = testCase.second;
    for (auto _ : state) {
        // Benchmarking code
        bool result = oddOrEven(testCase);// , b);
        benchmark::DoNotOptimize(result);
    }
}

// Register the function as a benchmark
BENCHMARK(BM)->Arg(0)->Arg(1)->Arg(2)->Arg(3)->Arg(4)->Arg(5); // Indices for predefined test cases

// Run the benchmark
BENCHMARK_MAIN();