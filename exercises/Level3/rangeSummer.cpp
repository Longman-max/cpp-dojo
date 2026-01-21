#include <iostream>

int main(){

    while (true){
        int start;
        std::cout << "Start: ";
        std::cin >> start;
    
        int end;
        std::cout << "End: ";
        std::cin >> end;
        
        // 1. SWAP LOGIC
        // If start is bigger (e.g. 10 to 1), flip them so we loop 1 to 10.
        if (start > end){
            int temp = start; 
            start = end;
            end = temp;
        }

        // 2. THE ACCUMULATOR
        // We need a bucket to hold the sum. Initialize it to 0.
        int sum = 0; 

        // 3. THE LOOP
        // Create a new variable 'i' that travels from start to end
        for (int i = start; i <= end; i++) {
            sum = sum + i; // Add the current number (i) to the total
        }

        std::cout << "The sum of numbers from " << start << " to " << end << " is: " << sum << "\n";
        std::cout << "-------------------\n";
    }
}