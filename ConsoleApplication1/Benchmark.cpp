#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "045 Compare Strings by Count of Characters.h"
using namespace std;
// Predefined test cases
const vector<pair<string, string>> testCases = {
    {"AB", "CD"},
    {"ABC", "DE"},
    {"hello", "edabit"},
    {"meow", "woof"},
    {"jrnvjrnnt", "cvjknfjvmfvnfjn"},
    {"jkvnjrt", "krnf"},
    {"Facebook", "Snapchat"}, 
};
static void BM(benchmark::State& state) {
    // Get test case based on index
    const auto& testCase = testCases[state.range(0)];
    const string& a = testCase.first;
    const string& b = testCase.second;
    for (auto _ : state) {
        // Benchmarking code
        bool result = comp(a, b);
        benchmark::DoNotOptimize(result);
    }
}

// Register the function as a benchmark
BENCHMARK(BM)->Arg(0)->Arg(1)->Arg(2)->Arg(3)->Arg(4)->Arg(5)->Arg(6)->Arg(7); // Indices for predefined test cases

// Run the benchmark
BENCHMARK_MAIN();