#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "075 OnOff Switches.h"
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
const vector<pair<int, int>> testCasesPairInt = {
    {12, 12},
    {100, 76},
    {6, 4},
    {528, 22},
    {10, 12}
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
    {{1, 5, 3}, 5},
    {{9, 8, 3}, 3},
    {{1, 2, 3}, 4},
    {{1, 5, 3, 10, 17, 20, -6}, 20},
    {{1, 1, 1}, 1}
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
const vector<int> testCasesI = {
    5,
    4,
    3,
    2,
    1,
    6,
    7,
    8,
    9,
    10,
    25
};
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
    "edabit is amazing.",
    "Mubashir is amazing.",
    "Trump is amazing.",
    "Infinity is amazing.",
    "Mubashir and edabit are amazing.",
    "Matt is amazing.",
    "Helen is amazing.",
    "Python and edabit are amazing.",
    "C++ is amazing.",
    "javascript is amazing.",
    "java is amazing.",
    "ruby is amazing.",
    "SQL is amazing.",
    "CSS is amazing.",
    "Pakistan is amazing. edabit",
    "You and edabit are amazing.",
    "Matt and edabit are amazing.",
    "Helen and edabit are amazing.",
    "Everyone is amazing.",
    "Swift and edabit are amazing."
};
//const vector<double> testCases = { 0, 20.5, -250, -5, -3.14 };
//<vector<int>
const vector<vector<int>> testCasesVI = {
    {10, 4, 1, 2, 8, 91},
    {-70, 43, 34, 54, 22}
};
static void BM(benchmark::State& state) {
    // Get the test case index from the benchmark range
    //int index = state.range(0);
    // Retrieve the array and size for the current test case
    //int* array = testCases[index];
    //int size = sizes[index];
    const auto& testCase = testCasesI[state.range(0)];
    //const vector<int> a = testCase.first;
    //const int b = testCase.second;
    //const auto& [a, b, c] = testCase;
    for (auto _ : state) {
        // Benchmark the function
        int result = posCom(testCase);// a, b);
        benchmark::DoNotOptimize(result); // Prevent optimization of the result
    }
}

// Register the benchmark
BENCHMARK(BM)->DenseRange(0, testCasesS.size() - 1); //sizeof(testCases) / sizeof(testCases[0]) - 1);
// Run the benchmark
BENCHMARK_MAIN();