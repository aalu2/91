#include <iostream>

int main() {
    int n = 7; // Number of lines
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            std::cout << " ";
        }
        std::cout << "*";
        
        if (i > 0) {
            int spaces = i * 2 - 1;
            for (int k = 0; k < spaces; ++k) {
                std::cout << " ";
            }
            std::cout << "*";
        }
        
        std::cout << std::endl;
    }

    // Mirror the upper half to print the lower half
    for (int i = n - 2; i >= 0; --i) {
        for (int j = 0; j < n - i - 1; ++j) {
            std::cout << " ";
        }
        std::cout << "*";
        
        if (i > 0) {
            int spaces = i * 2 - 1;
            for (int k = 0; k < spaces; ++k) {
                std::cout << " ";
            }
            std::cout << "*";
        }
        
        std::cout << std::endl;
    }

    return 0;
}

