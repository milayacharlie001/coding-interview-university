#include <iostream>

int readNumber() {
    std::cout << "Enter a number: ";
    int num{};
    std::cin >> num;
    return num;
}

void writeAnswer(int sum) {
    std::cout << "Their sum is " << sum << "\n.";
}

int main() {
    int x{readNumber()};
    int y{readNumber()};
    writeAnswer(x + y);

    return 0;
}
