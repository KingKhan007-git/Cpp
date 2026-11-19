# Task 3

Money is stored as integer paise to avoid binary floating-point rounding. long long safely holds daily aggregate values; int may not. bool stores flags, int stores hour/zone index, long long stores money/counts, double is used only for comparison experiments. sizeof and <climits> are printed by the program. Both integer and double additions are O(1); integer paise is exact for whole-paise amounts.

## Build and run

```bash
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o main
./main
```

See `main.cpp` for the executable example. Capture terminal output after local execution for submission evidence.
