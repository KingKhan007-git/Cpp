# Assignment 1 Report — Namma Metro Smart-Card Fare System

**Student:** Fardeen Khan F  
**Register:** 192421289  
**Repository:** https://github.com/KingKhan007-git/Cpp/tree/main/Assignment1

## Design summary

Use `enum class Zone`, `constexpr` fare constants, integer paise, `long long` for balances and network totals, and a `SmartCard` with a private balance. Peak windows are half-open: 08:00 ≤ time < 10:00 and 17:00 ≤ time < 20:00. A successful stored-value trip leaves at least 5,000 paise.

## Output predictions (written before running)

Task 4: `3 3.5`, `C 68`, `1 true`, `s >= u`.

Task 5: `11 16`, `9 6 4`, `6 4`, `3 1 -3 -1`, `18`.

## Complexity

Fare calculation, eligibility checks, and card deduction are O(1) time and O(1) extra space. Processing n journeys is O(n). A table-driven test suite with t cases is O(t) time and O(t) test-data space. Configuration-based fare loading takes O(z) startup time and O(z) storage for z zones.

## Important assumptions / specification gaps

The assignment says students and senior citizens receive a concession but gives no concession percentages or order of application. No percentage is invented in this implementation. Task 12 does not define pass expiry, renewal, or whether a pass is bound to a passenger/card; these are identified as open policy decisions. The weekend discount is interpreted as 10% of base fare and takes precedence over peak surcharge, so the two are not combined.

## Verification status

Source files are organized task-wise. The expected-output predictions are documented separately from execution. Run every program locally with the compiler command in each task README and save terminal screenshots in that task folder before submission. Do not represent a predicted output as an executed screenshot.
