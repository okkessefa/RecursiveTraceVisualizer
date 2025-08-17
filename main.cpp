#include <iostream>
#include "fibonacci.h"

int main() {
    int n;
    std::cout << "Enter a number for Fibonacci: ";
    std::cin >> n;

    std::cout << "\nTracing recursive calls:\n";
    int result = fibonacci(n);

    std::cout << "\nFinal Result: fib(" << n << ") = " << result << "\n";
    return 0;
}
