#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "082 First and Last Elements in an Array.h"
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
    {27, 59},
    {135, 11},
    {45, 45},
    {45, 15},
    {31, 100},
    {35, 55}
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
//<vector<string>, string>>
const vector<pair<vector<string>, string>> testCasesPVSS = {
    {{"clever", "meek", "hurried", "nice"}, "ly"},
    {{"new", "pander", "scoop"}, "er"},
    {{"bend", "sharpen", "mean"}, "ing"},
    {{"bend", "tooth", "mint"}, "y"},
    {{"bend", "tooth", "mint"}, "ier"}
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
    1,
    67,
    123,
    55551,
    96456431,
    0
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
//<double>
//const vector<double> testCases = { 0, 20.5, -250, -5, -3.14 };
//<vector<any>
const vector<vector<std::any>> testCasesAny = {
    std::vector<std::any>{5, 10, 15, 20, 25},
    std::vector<std::any>{"edabit", 13, std::any{}, false, true},
    std::vector<std::any>{"", 4, "6", "hello", std::any{}},
    std::vector<std::any>{"hello", "edabit", "dot", "com"},
    std::vector<std::any>{3, 2, 1},
    std::vector<std::any>{"one", "two"},
    std::vector<std::any>{false, false, true, false, false, true, false}
};
//<vector<int>
const vector<vector<int>> testCasesVI = {
    {1, 2, 3, 4},
    {5, 6, 7},
    {9, 9, 2, 3, 4},
    {3, 3},
    {-1, -1, -1},
    {}
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
#include <vector>
#include <any>

// Convert int arrays to vectors of std::any
std::vector<std::any> convertToAnyVector(int* arr, int size) {
    std::vector<std::any> vec;
    for (int i = 0; i < size; ++i) {
        vec.push_back(arr[i]);
    }
    return vec;
}

static void BM(benchmark::State& state) {
    size_t index = static_cast<size_t>(state.range(0));

    assert(index < testCasesAny.size());

    // Convert the test case to a vector of std::any
    std::vector<std::any> testCase = convertToAnyVector(testCasesA[index], sizes[index]);

    for (auto _ : state) {
        auto result = FirstLast(testCase);
        benchmark::DoNotOptimize(result);
    }
}

// Register the benchmark
BENCHMARK(BM)->DenseRange(0, 6);

// Run the benchmark
BENCHMARK_MAIN();