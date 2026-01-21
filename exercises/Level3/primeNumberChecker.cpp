// boolean flag

#include <iostream>

int main() {
    while (true) {
        int n;
        std::cout << "Enter a number to check: ";
        std::cin >> n;

        // 1. The Flag: Assume it is prime until proven otherwise
        bool isPrime = true;

        // 2. Edge Case: 0 and 1 are technically not prime
        if (n <= 1) {
            isPrime = false;
        }

        // 3. The Loop: Check numbers from 2 up to n-1
        for (int i = 2; i < n; i++) {
            
            // Check if 'n' is divisible by 'i' (no remainder)
            if (n % i == 0) {
                isPrime = false; // We found a divisor! It's not prime.
                break;           // Stop the loop immediately (optimization).
            }
        }

        // 4. The Result
        if (isPrime) {
            std::cout << n << " is a Prime Number.\n";
        } else {
            std::cout << n << " is NOT a Prime Number.\n";
        }
        
        std::cout << "-------------------\n";
    }
}