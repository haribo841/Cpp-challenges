# C++ coding challenges

A personal collection of C++ solutions to Edabit programming challenges. The repository pairs numbered challenge sources with a GoogleTest test project and includes a Google Benchmark experiment for selected solutions.

## Contents

- [ConsoleApplication1](ConsoleApplication1) — numbered C++ challenge solutions and benchmark source.
- [Tests](Tests) — GoogleTest-based checks for the challenge implementations.
- [ConsoleApplication1.sln](ConsoleApplication1.sln) — Visual Studio solution.
- [Project structure guide](docs/STRUCTURE.md) — build and test context.

## Quick start

Requirements: Windows, Visual Studio 2022 with Desktop Development with C++, and NuGet package restore.

1. Open ConsoleApplication1.sln in Visual Studio.
2. Restore the solution's NuGet packages if Visual Studio requests it.
3. Select a Debug or Release configuration and build the solution.
4. Run the appropriate console or test project from Visual Studio.

The root CMake file fetches GoogleTest but does not yet declare the challenge and test targets, so the Visual Studio solution is the documented build entry point.

## Technologies

- C++ challenge implementations.
- GoogleTest for unit tests.
- Google Benchmark for a benchmark source.
- Visual Studio project files and a CMake bootstrap for GoogleTest.

## Documentation, license, and support

- [Project structure guide](docs/STRUCTURE.md)
- [Previous README archive](docs/archive/README-2026-09-16.md)
- [License](LICENSE.txt)
- Report a reproducible challenge or test issue with the challenge number and build configuration.
