#include "io.h"
#include <iostream>

int readNumber() {
    std::cout << "Enter a number: ";
    int num {};
    std::cin >> num;
    
    return num;
}

void writeAnswer(int num) {
    std::cout << "Answer: " << num << "\n.";
}
