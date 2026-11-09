#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "100 Instances of a Character in a String.h"
#include <span>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using std::pair;
using std::string;
using std::tuple;
using std::vector;
const vector<tuple<int, int, char>> testCasesIIC = {
{ 24, 100, '-' },
{ -20, -30, '+' },
{ 1500, 5, '/' },
{ 38, 3, '*' },
{ 49, 5, '%' }
};
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
const vector<pair<vector<int>, int>> testCasesPVII = {
    {{1, 2, 3, 4, 5}, 5},
    {{5, 5, 3, 4, 5}, 3},
    {{5, 4, 5, 6}, 10},
    {{1, 2, 1}, 1},
    {{3, 3, 3}, 4},
    {{4, 4}, 3},
    {{}, 4}
};
const vector<pair<vector<int>, vector<int>>> testCasesPVIVI = {
    {{1, 3, 5}, {2, 6, 8}},
    {{7, 8}, {10, 9, 1, 1, 2}},
    {{4, 5, 1}, {3, 3, 3, 3, 3}}
};
const vector<pair<vector<string>, string>> testCasesPVSS = {
    {{"abc", "ghj", "banana", "grape"}, "grape"},
    {{"a", "b", "c", "d", "e", "f"}, "f"},
    {{"hi", "edabit.com", "testcase", "validstring"}, "edabit.com"}
};
const vector<pair<char, string>> testCasesPCS = {
    {'a', "edabit"},
    {'b', "big fat bubble"},
    {'f', "frank and his friends have offered five foxes for sale"},
    {'s', "sssssssssssssssssssssssss"},
    {'c', "Chamber of secrets"},
    {'a', "Adam and Eve bit the apple and found a snake"},
    {'7', "10795426697"},
    {'x', "edabit"}
};
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
const std::vector<std::pair<double, double>> testCasesPDD = {
    {139.4, 93.8},
    {181.2, 124.5},
    {154.7, 104.3}
};
const vector testCasesI = { 1, 2, 3, 4, 5, 6 };
const vector<string> testCasesS = {
    "buf-fet",
    "beau-ti-ful",
    "mon-u-men-tal",
    "on-o-mat-o-poe-ia",
    "o-ver-ly",
    "pas-try",
    "flu-id",
    "syl-la-ble"
};
const vector<vector<std::any>> testCasesVA = {
   {string("tt") },
   {string("lama"), string("tiger"), 6 },
   {string("love") },
   { 1, 3, 3 },
   {vector<int>{1}, 3, string("ygg") }
};

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

std::vector<std::any> convertToAnyVector(std::span<const int> values) {
    std::vector<std::any> vec;
    for (const int value : values) {
        vec.emplace_back(value);
    }
    return vec;
}
static void BM(benchmark::State& state) {
    const auto& [a, b] = testCasesPCS[state.range(0)];
    for (auto iteration : state) {
        static_cast<void>(iteration);
        auto result = charCount(a, b);
        benchmark::DoNotOptimize(result);
    }
}

[[maybe_unused]] const auto* const benchmarkRegistration =
    benchmark::RegisterBenchmark("BM", BM)->DenseRange(0, static_cast<int>(testCasesPCS.size() - 1));

BENCHMARK_MAIN();
