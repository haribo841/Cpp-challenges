﻿#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include <vector>
#include <string>
#include "049 Recreating Function.h"
using namespace std;
// Predefined test cases
/*const vector<pair<int, bool>> testCases = {
    {17, true},
    {30, true},
    {24, false},
    {18, false},
    {3, false},
};*/
//const vector<int> testCases = { 4, 15, -4, 42, -9, 0, 1, -1 };
const vector<double> testCases = { 0, 20.5, -250, -5, -3.14 };
static void BM(benchmark::State& state) {
    // Get test case based on index
    const auto& testCase = testCases[state.range(0)];
    //const int a = testCase.first;
    //const bool b = testCase.second;
    for (auto _ : state) {
        // Benchmarking code
        bool result = absolute(testCase);// a, b);
        benchmark::DoNotOptimize(result);
    }
}

// Register the function as a benchmark
BENCHMARK(BM)->DenseRange(0, testCases.size() - 1);

// Run the benchmark
BENCHMARK_MAIN();