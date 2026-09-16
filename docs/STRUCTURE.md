# Project structure guide

## Layout

| Location | Purpose |
| --- | --- |
| [ConsoleApplication1](../ConsoleApplication1) | Numbered challenge headers and source files. |
| [ConsoleApplication1/Benchmark.cpp](../ConsoleApplication1/Benchmark.cpp) | Google Benchmark experiment for selected implementations. |
| [Tests](../Tests) | GoogleTest test project, with checks collected in test.cpp. |
| [ConsoleApplication1.sln](../ConsoleApplication1.sln) | Visual Studio solution used for the current build workflow. |
| [CMakeLists.txt](../CMakeLists.txt) | FetchContent bootstrap for GoogleTest. |

## Build and test boundary

The Visual Studio projects contain the current build and test wiring. The root CMake configuration downloads GoogleTest and sets a minimum C++ standard, but it does not declare executable targets for the challenge or test projects. It is therefore a starting point for CMake work rather than a complete standalone CMake build.

Restore the legacy NuGet packages before building the Visual Studio solution. Run the test project to execute the GoogleTest checks. Benchmark.cpp is a separate benchmark entry point and should be run deliberately because benchmark runs can take longer than ordinary tests.

## Contributing a challenge

Keep the implementation and its test synchronized:

1. Add the numbered challenge source under ConsoleApplication1.
2. Add or update the matching GoogleTest case under Tests.
3. Build the appropriate configuration and run the related tests.
4. Include the challenge number and expected behavior in the change description.
