#include <iostream>
#include <limits> // Required for clearing the input buffer

int main() {
    while (true) {
        int user;
        std::cout << "Which number do you want to skip (1 to 20)? Or enter a letter to quit: ";

        // 1. Try to read an integer. If it fails (e.g., user enters 'a'), exit the loop.
        if (!(std::cin >> user)) {
            std::cout << "Invalid input or quit command received. Goodbye!" << std::endl;
            break;
        }

        // 2. Process numbers 1 to 20
        for (int num = 1; num <= 20; num++) {
            if (user == num) {
                continue; // Skip the user's number
            }
            std::cout << num << " ";
        }
        std::cout << std::endl << std::endl;
    }
    return 0;
}
