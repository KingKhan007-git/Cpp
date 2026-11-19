# Task 10 — Compare Expectations with Execution

The program compares exact integer-paise totals with repeated double-rupee additions for 20,000, 500,000 and 3,000,000 journeys at ₹36 per journey. Observed totals at two decimal places agree for this selected fare because 36.0 is exactly representable and all totals remain within the exact-integer range of double.

| Journeys | Exact total (paise) | Total (rupees) | Signed 32-bit int can hold paise? |
|---:|---:|---:|---|
| 20,000 | 72,000,000 | ₹720,000.00 | Yes |
| 500,000 | 1,800,000,000 | ₹18,000,000.00 | Yes |
| 3,000,000 | 10,800,000,000 | ₹108,000,000.00 | No |

At 3,000,000 journeys the paise total exceeds INT_MAX=2,147,483,647. Do not actually perform signed int overflow; it is undefined behaviour. long long safely holds this total. Double is not a general exact-money representation even though this particular test prints equal values. Each addition is O(1); each accumulator uses O(1) space. The Task 4 signed/unsigned comparison warning is recorded in that task's output log.
