#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "061 Last Element in an Array.h"
using namespace std;
// Predefined test cases
int arr1[] = {1, 2, 3};
int arr2[] = { 1, 2, 3, 56, 87, 23, 65, 45 };
int arr3[] = { 1 };
int arr4[] = { 0 };
int arr5[] = { -1, 3, 4, -45, -10 };

int* testCases[] = { arr1, arr2, arr3, arr4, arr5 };
int sizes[] = { 3, 8, 1, 1, 5 };
//<int, int, int>
/*const vector<tuple<int, int, int>> testCases = {
    {8, 3, 2},
    {8, 3, 3},
    {24, 12, 2},
    {5, 6, 1},
    {5, 0, 100},
    {15, 2, 7},
    {15, 2, 8}
};*/
//<int, int>
/*const vector<pair<int, int>> testCases = {
    {-6, -9},
    {6, 2},
    {6, -999},
    {100, 1},
    {0, 0},
    {-80, -5000},
    {0, 2}
};*/
//<int, bool>
/*const vector<pair<int, bool>> testCases = {
    {17, true},
    {30, true},
    {24, false},
    {18, false},
    {3, false},
};*/
//const vector<int> testCases = { 12, 6000, 314 };
//<char>
/*const vector<char> testCases = {
    ' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 
    'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 
    'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', 
    '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 
    'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 
    'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
};*/
//<string>
/*const vector<string> testCases = {
    "Foo",
    "Foo bar",
    "Foo ",
    " Foo",
    " ",
    "",
    ",./;'[]-="
};*/
//const vector<double> testCases = { 0, 20.5, -250, -5, -3.14 };
//<vector<int>
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
static void BM_getLastItem(benchmark::State& state) {
    // Get the test case index from the benchmark range
    int index = state.range(0);

    // Retrieve the array and size for the current test case
    int* array = testCases[index];
    int size = sizes[index];

    for (auto _ : state) {
        // Benchmark the function
        int result = getLastItem(array, size);
        benchmark::DoNotOptimize(result); // Prevent optimization of the result
    }
}

// Register the benchmark
BENCHMARK(BM_getLastItem)->DenseRange(0, sizeof(testCases) / sizeof(testCases[0]) - 1);

// Run the benchmark
BENCHMARK_MAIN();