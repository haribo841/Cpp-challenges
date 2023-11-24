#include <iostream>
#include <string>
#include <vector>
#include <benchmark/benchmark.h>
#include "Benchmark.h"
#include "020 Name Greeting.h"
using namespace std;
static void Benchmark(benchmark::State& state) {
    // Perform setup here
    {
        vector<string> inputs = {
"Gerald"
"Fatima"
"Ed"
"Tiffany"
        };
        for (auto _ : state) {
            // This code gets timed
            for (const string& input : inputs) {
                string result = helloName(input);
                benchmark::DoNotOptimize(result);
            }
        }
    }
}
    // Register the function as a benchmark
    BENCHMARK(Benchmark);
    // Run the benchmark
    BENCHMARK_MAIN();