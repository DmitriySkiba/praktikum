#include <iostream>
#include <iomanip>

int main() {
    double a, b;
    std::cin >> a >> b;

    float quotient = static_cast<float>(a) / b;
    std::cout << std::setprecision(16) << quotient << std::endl;
    return 0;
}