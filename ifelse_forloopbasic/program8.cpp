//find the factorial.
#include<iostream>

int main() {
    int num;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> num;

    if (num < 0) {
        std::cerr << "Factorial is not defined for negative numbers.\n";
        return 1;
    }

    unsigned long long result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }

    std::cout << "Factorial of " << num << " is: " << result << "\n";

    return 0;
}
