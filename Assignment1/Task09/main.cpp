#include <iostream>
#include <string>
enum class Zone { Inner, Middle, Outer, Invalid };
long long calculateFare(Zone zone, int hour) {
    long long base = 0;
    switch (zone) {
        case Zone::Inner: base = 1000; break;
        case Zone::Middle: base = 2000; break;
        case Zone::Outer: base = 3000; break;
        default: return -1;
    }
    const bool peak = (hour >= 8 && hour < 10) || (hour >= 17 && hour < 20);
    return peak ? base * 120 / 100 : base;
}
int main() {
    struct Test { const char* name; Zone zone; int hour; long long expected; };
    const Test tests[] = {
        {"Inner off-peak", Zone::Inner, 11, 1000},
        {"Middle off-peak", Zone::Middle, 11, 2000},
        {"Outer off-peak", Zone::Outer, 11, 3000},
        {"Inner 08:00", Zone::Inner, 8, 1200},
        {"Inner 10:00", Zone::Inner, 10, 1000},
        {"Inner 17:00", Zone::Inner, 17, 1200},
        {"Inner 20:00", Zone::Inner, 20, 1000},
        {"Unknown zone", Zone::Invalid, 12, -1}
    };
    int passed = 0;
    for (const auto& t : tests) {
        const long long actual = calculateFare(t.zone, t.hour);
        const bool ok = actual == t.expected;
        passed += ok;
        std::cout << t.name << ": expected=" << t.expected << " actual=" << actual
                  << " " << (ok ? "PASS" : "FAIL") << '\n';
    }
    std::cout << "Tests passed: " << passed << '/' << (sizeof(tests) / sizeof(tests[0])) << '\n';
    long long fiveTripTotal = 1000 + 2400 + 2000 + 3600 + 3000;
    std::cout << "Five-trip hand total paise: " << fiveTripTotal << '\n';
}