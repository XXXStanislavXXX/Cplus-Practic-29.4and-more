# Unique Filter

Simple C++ example that removes duplicate integers while preserving the first occurrence order. 
Implementation uses `std::unordered_set` and a lambda located in `src/unique_filter.cpp` with the 
public interface declared in `include/unique_filter.h`. Example usage is in `main.cpp`.

## Files
- `include/unique_filter.h` — header with function declaration and documentation.
- `src/unique_filter.cpp` — implementation using a lambda and `std::unordered_set`.
- `main.cpp` — example program demonstrating `filter_unique`.

## Requirements
- C++17 compatible compiler
- CLion (recommended) or a command-line toolchain on Windows (MinGW/GCC or MSVC)

## Build

## CLion
Open the project folder in CLion (it will detect or you can create a `CMakeLists.txt`). Set the C++ 
standard to C++17 in the IDE settings if needed and build/run the target.

## Command line (GCC / MinGW)
From the project root:
```bash
g++ -std=c++17 -Iinclude src/unique_filter.cpp main.cpp -o unique_filter.exe

## Expected output:
Original values: 1 2 3 2 4 1 5 3
Filtered unique: 1 2 3 4 5
