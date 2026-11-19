# Task 9 — Implement and Test Fare Logic

The test-driven implementation validates hour range and zone before calculating the fare. It covers Inner, Middle and Outer fares, peak/off-peak windows, all four boundary times, an unknown zone, and an invalid hour. The test table is processed in O(t) time and occupies O(t) space for t test cases.

## Test evidence

See `output.txt`: **9/9** fare cases pass. The five-journey hand calculation is 1,000 + 2,400 + 2,000 + 3,600 + 3,000 = 12,000 paise (₹120.00).

A negative recharge must be rejected before changing the card balance; the card examples in Tasks 1 and 7 keep the balance private and validate deductions. Invalid text input is demonstrated in Task 8 by entering `abc` followed by `18`; the stream error is cleared and the bad line discarded before retry.
