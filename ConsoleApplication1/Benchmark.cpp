#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include <vector>
#include <string>
#include "050 Number Even or Odd.h"
using namespace std;
// Predefined test cases
/*const vector<pair<int, bool>> testCases = {
    {17, true},
    {30, true},
    {24, false},
    {18, false},
    {3, false},
};*/
const vector<int> testCases = { 3, 0, 7, 12, 6474, 563, 3, 1111100000, 301, -3, 0, -7, -12, -6474, -563, -3, -1111100000, -301 };
//const vector<double> testCases = { 0, 20.5, -250, -5, -3.14 };
static void BM(benchmark::State& state) {
    // Get test case based on index
    const auto& testCase = testCases[state.range(0)];
    //const int a = testCase.first;
    //const bool b = testCase.second;
    for (auto _ : state) {
        // Benchmarking code
        string result = isEvenOrOdd(testCase);// a, b);
        benchmark::DoNotOptimize(result);
    }
}

// Register the function as a benchmark
BENCHMARK(BM)->DenseRange(0, testCases.size() - 1);

// Run the benchmark
BENCHMARK_MAIN();