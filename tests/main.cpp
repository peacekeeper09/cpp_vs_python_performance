#include <iostream>
#include <chrono>

int main() {
    auto start = std::chrono::high_resolution_clock::now();
    long long result = 0;
    for (int i = 0; i < 1000000000; ++i) {
        result += i;
    }
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "C++ Time: " << duration.count() << " microseconds" << std::endl;
    return 0;
}
