#include <iostream>

int main() {
    int a = 5, b = 12, c = 2;
    double x = 10.0, y = 3.0;

    std::cout << "Result 1: " << b / a << std::endl;
    std::cout << "Result 2: " << b % a << std::endl;
    std::cout << "Result 3: " << x / y << std::endl;
    std::cout << "Result 4: " << (a + b + c) / y << std::endl;
    std::cout << "Result 5: " << static_cast<double>(b) / a << std::endl;

    return 0;
}
