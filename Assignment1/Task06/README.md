# Task 6

Pseudocode: validate zone; select base fare using switch; if peak add 20% using integer arithmetic; accept only when balance-fare >= 5000; deduct on success; otherwise leave balance unchanged. Use switch for finite zone cases, if for ranges/eligibility, range-for for a known trip collection, while for input retry. The completed TODO program also verifies 10:00 and 20:00 are off-peak. Both switch and array lookup are O(1); the array uses O(z) storage.

## Build and run

```bash
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o main
./main
```

See `main.cpp` for the executable example. Capture terminal output after local execution for submission evidence.
