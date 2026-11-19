# Task 4

Predicted output before execution: 3 3.5; C 68; 1 true; s >= u. Integer division truncates 7/2 to 3 before conversion to double. static_cast<double>(a) forces floating division. char promotes to int in ch+1. 5 converts to bool true. Comparing signed -1 with unsigned 1 converts -1 to a large unsigned value, so s<u is false. Use explicit casts and brace initialization to expose conversions.

## Build and run

```bash
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o main
./main
```

See `main.cpp` for the executable example. Capture terminal output after local execution for submission evidence.
