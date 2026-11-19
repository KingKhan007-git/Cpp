# Task 10

For a constant 3,600-paise fare, exact aggregate is 72,000,000 paise at 20,000 trips, 1,800,000,000 at 500,000, and 10,800,000,000 at 3,000,000. A signed 32-bit int cannot hold the last aggregate (and is close to its limit at 500,000). long long is appropriate. Double is approximate; this particular whole-rupee fare may print exactly at two decimals, but binary representation is not a general exact-money guarantee. The program measures repeated additions and prints observed values.

## Build and run

```bash
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o main
./main
```

See `main.cpp` for the executable example. Capture terminal output after local execution for submission evidence.
