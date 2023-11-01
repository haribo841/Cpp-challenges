#include <iostream>
#include <string>
#include <vector>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "016 Basic Variable Assignment.h"
using namespace std;

std::string giveMeSomething(const std::string& input) {
    // Implementacja funkcji
    std::string result = input + "Edabit";
    return result;
}

static void BM_giveMeSomething(benchmark::State& state) {
    // Przygotuj zestaw danych wej�ciowych (w tym przypadku ci�gi znak�w)
    std::vector<std::string> inputs = {
        "Mubashir",
        "Matt",
        "C++",
        "Airforce"
    };

    for (auto _ : state) {
        for (const std::string& input : inputs) {
            std::string result = giveMeSomething(input);
            benchmark::DoNotOptimize(result);
        }
    }
}

BENCHMARK(BM_giveMeSomething);

BENCHMARK_MAIN();
