#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "056 Check String for Spaces.h"
using namespace std;
// Predefined test cases
/*const vector<pair<int, bool>> testCases = {
    {17, true},
    {30, true},
    {24, false},
    {18, false},
    {3, false},
};*/
//const vector<int> testCases = { 6, 1000, 12 };
const vector<string> testCases = {
    "Foo",
    "Foo bar",
    "Foo ",
    " Foo",
    " ",
    "",
    ",./;'[]-="
};
//const vector<double> testCases = { 0, 20.5, -250, -5, -3.14 };
/*const vector<vector<int>> testCases = {
    {-9, -8, 6, -9, 15, 6},
    {-5, 6, 18, 4, 16, -2},
    {-2, 20, -9, -9, -2, -7},
    {4, -2, 11, -9, 15, 2},
    {15, 10, 3, -6, 6, 19},
    {1, 7, 18, -1, -2, 9},
    {5, 1, -9, 7, -8, -10},
    {-4, 17, -4, 20, -7, 0},
    {-2, 11, 11, -3, -3, -3},
    {1, 15, 14, 20, 10, 6},
    {4, 17, 12, 2, 10, 2},
    {-3, 3, 20, 10, 0, 17},
    {-3, 6, 20, 9, 6, 7},
    {16, 15, 1, 18, -7, -3},
    {-7, 4, -4, -3, -8, -9},
    {15, 8, 17, 18, 10, 10},
    {-3, 20, 16, 8, 18, -10},
    {6, 18, 9, 1, 3, 1},
    {20, 18, -2, -10, -10, 17},
    {18, 20, -7, -4, -2, -8}
};*/
static void BM(benchmark::State& state) {
    // Get test case based on index
    const auto& testCase = testCases[state.range(0)];
    //const int a = testCase.first;
    //const bool b = testCase.second;
    for (auto _ : state) {
        // Benchmarking code
        int result = HasSpaces(testCase);// a, b);
        benchmark::DoNotOptimize(result);
    }
}

// Register the function as a benchmark
BENCHMARK(BM)->DenseRange(0, testCases.size() - 1);

// Run the benchmark
BENCHMARK_MAIN();