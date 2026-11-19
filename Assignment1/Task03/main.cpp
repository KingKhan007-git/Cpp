#include <climits>
#include <iomanip>
#include <iostream>
#include <limits>
int main() {
    std::cout << "sizeof(bool/int/long long/double): " << sizeof(bool) << '/' << sizeof(int)
              << '/' << sizeof(long long) << '/' << sizeof(double) << '\n';
    std::cout << "INT_MAX: " << INT_MAX << "\nLLONG_MAX: " << LLONG_MAX << '\n';
    const long long farePaise = 3600;
    const long long journeys = 3000000;
    const long long totalPaise = farePaise * journeys;
    std::cout << "Integer total Rs: " << totalPaise / 100 << '.' << std::setw(2)
              << std::setfill('0') << totalPaise % 100 << std::setfill(' ') << '\n';
    double accumulated = 0.0;
    for (long long i = 0; i < journeys; ++i) accumulated += 36.0;
    std::cout << std::fixed << std::setprecision(2) << "Double total Rs: " << accumulated << '\n';
}