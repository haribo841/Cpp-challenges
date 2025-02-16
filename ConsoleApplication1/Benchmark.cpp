#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "097 Days in a Month.h"
using namespace std;
// Predefined test cases
//<int[], int>
int arr1[] = { 4, 5, 1, 3 };
int arr2[] = { 13, 27, 18, 26 };
int arr3[] = { 32, 35, 37, 39 };
int arr4[] = { 1000, 1001, 857, 1 };
int arr5[] = { 27364, 837363, 736736, 73635 };
int arr6[] = { 30, 2, 40, 3 };
int arr7[] = { 0, 1, 0, 0, -1 };

int* testCasesA[] = { arr1, arr2, arr3, arr4, arr5, arr6, arr7 };
int sizes[] = { 4, 4, 4, 4, 4, 4, 5 };
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
//<int, int, char>
const vector<tuple<int, int, char>> testCasesIIC = {
{ 24, 100, '-' },
{ -20, -30, '+' },
{ 1500, 5, '/' },
{ 38, 3, '*' },
{ 49, 5, '%' }
};
//<int, int>
const vector<pair<int, int>> testCasesPII = {
    {1, 2018},
    {2, 2018},
    {3, 2018},
    {4, 2018},
    {5, 2018},
    {6, 2018},
    {7, 2018},
    {8, 2018},
    {9, 2018},
    {10, 2018},
    {11, 2018},
    {12, 2018},
    {2, 2004},  // Leap year
    {2, 1800},  // Not a leap year
    {2, 1600}   // Leap year
};
//<int, bool>
/*const vector<pair<int, bool>> testCases = {
    {17, true},
    {30, true},
    {24, false},
    {18, false},
    {3, false},
};*/
//<vector<int>, int>>
const vector<pair<vector<int>, int>> testCasesPVII = {
    {{1, 2, 3, 4, 5}, 3},
    {{1, 1, 2, 1, 1}, 3},
    {{1, 1, 2, 1, 5, 4, 7}, 7},
    {{1, 1, 2, 1, 5, 4, 7}, 8},
    {{5, 5, 5, 6}, 5},
    {{}, 5}
};
//<vector<int>, <vector<int>
const vector<pair<vector<int>, vector<int>>> testCasesPVIVI = {
    {{1, 3, 5}, {2, 6, 8}},
    {{7, 8}, {10, 9, 1, 1, 2}},
    {{4, 5, 1}, {3, 3, 3, 3, 3}}
};
//<vector<string>, string>>
const vector<pair<vector<string>, string>> testCasesPVSS = {
    {{"abc", "ghj", "banana", "grape"}, "grape"},
    {{"a", "b", "c", "d", "e", "f"}, "f"},
    {{"hi", "edabit.com", "testcase", "validstring"}, "edabit.com"}
};
//<string, string>
const vector<pair<string, string>> testCasesPairString = {
    {"abc", "bc"},
    {"abc", "d"},
    {"samurai", "zi"},
    {"feminine", "nine"},
    {"convention", "tio"},
    {"cooperative", "ooper"},
    {"extraterrestrial", "xtraterrestrial"},
    {"access", "ss"},
    {"motorist", "is"},
    {"landowner", "landowner"}
};
//<double, double>
const std::vector<std::pair<double, double>> testCasesPDD = {
    {139.4, 93.8},
    {181.2, 124.5},
    {154.7, 104.3}
};
const vector<int> testCasesI = { 1, 2, 3, 4, 5, 6 };
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
const vector<string> testCasesS = {
    "It's high noon",
    "Is this easy mode",
    "What an easy task, right",
    "This is a test",
    "Just an example here move along",
    "How are you today?"
};
//<double>
//const vector<double> testCases = { 0, 20.5, -250, -5, -3.14 };
//vector<any>
const vector<vector<std::any>> testCasesVA = {
   {string("tt") },
   {string("lama"), string("tiger"), 6 },
   {string("love") },
   { 1, 3, 3 },
   {vector<int>{1}, 3, string("ygg") }
};

//<vector<int>
const vector<vector<int>> testCasesVI = {
    {1, 5, 9},
    {3, 4, 5},
    {1, 1, 1},
    {2},
    {5, 1, 2},
    {32},
    {5, 9, 4, 4, 9},
    {0, 1, 2},
    {}
};
//<vector<bool>>
const std::vector<std::vector<bool>> testCasesVB = {
    { true, false, false, true, false },
    { false, false, false, false },
    {},
    { false, false, true, true, false, false, false, true, true, true, true, false, true, true, false },
    { true, false, true, true, false, false, false, false, false },
    { false, true, true, false, true, true, false, true, false, true, false, true, false, true, false },
    { true, false, true, true, true, false, true, true, false, false },
    { false, false, false, false, true, false, true, false, true, false, false },
    { true, false, false, false, true, false, false, true, false, false, false },
    { true, true, false, true, false, false, false, false, true, false },
    { true, false, true, true, false, true, true, true, true, false, true, false, true, false },
    { true, false, true, true, true, true, false, true, true, false, true, false, false, false, false },
    { true, true, false, false, false, false, true, false, true, true, false, true }
};
const vector<vector<double>> testCasesVD = {
    {1, 5, 6, 3},
    {0.2, 0.3, 0.4},
    {10, 12, 1, 10},
    {10, 13, 3.8, 20, 10},
    {0.5, 0.5},
    {16, 30, 22.8, 4},
    {20, 15, 32.5, 2},
    {52, 22, 20, 30},
    {10, 12, 32, 4.9, 5, 6, 71}
};

std::vector<std::any> convertToAnyVector(int* arr, int size) {
    std::vector<std::any> vec;
    for (int i = 0; i < size; ++i) {
        vec.push_back(arr[i]);
    }
    return vec;
}
static void BM(benchmark::State& state) {
    // Get the test case index from the benchmark range
    //int index = state.range(0);
    // Retrieve the array and size for the current test case
    //int* array = testCases[index];
    //int size = sizes[index];
    const auto& testCase = testCasesPII[state.range(0)];
    const auto& a = testCase.first;
    const auto& b = testCase.second;
    //const auto& [a, b, c] = testCase;
    for (auto _ : state) {
        // Benchmark the function
        auto result = days(a, b);
        benchmark::DoNotOptimize(result); // Prevent optimization of the result
    }
}

// Register the benchmark
BENCHMARK(BM)->DenseRange(0, testCasesPII.size() - 1); //sizeof(testCases) / sizeof(testCases[0]) - 1);
// Run the benchmark
BENCHMARK_MAIN();