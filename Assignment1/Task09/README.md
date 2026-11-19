# Task 9

Test table covers all three zones, peak/off-peak boundaries 08:00, 10:00, 17:00 and 20:00, and an invalid zone. Negative recharge must be rejected before adding to balance; malformed hour input is demonstrated in Task08. A five-trip sample is explicitly summed. A table-driven test loop takes O(t) time and O(t) test-data space.

## Build and run

```bash
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o main
./main
```

See `main.cpp` for the executable example. Capture terminal output after local execution for submission evidence.
