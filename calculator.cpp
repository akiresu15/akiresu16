#include <iostream>

// Function to calculate factorial of a number
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

// Function to calculate binomial coefficient C(n, k)
unsigned long long binomialCoefficient(int n, int k) {
    if (k > n) return 0;
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int n, k;
    char choice;

    do {
        std::cout << "Enter n: ";
        std::cin >> n;
        std::cout << "Enter k: ";
        std::cin >> k;

        unsigned long long result = binomialCoefficient(n, k);
        std::cout << "C(" << n << ", " << k << ") = " << result << std::endl;

        std::cout << "Do you want to calculate another binomial coefficient? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    std::cout << "Calculator closed." << std::endl;
    return 0;
}