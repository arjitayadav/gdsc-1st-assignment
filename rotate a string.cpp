#include <iostream>
#include <string>

std::string rotateLeft(const std::string &str, int positions) {
    
    int effectivePositions = positions % str.length();

    return str.substr(effectivePositions) + str.substr(0, effectivePositions);
}

int main() {
    std::string input;
    int positions;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::cout << "Enter the number of positions to rotate left: ";
    std::cin >> positions;

    std::string rotatedString = rotateLeft(input, positions);

    std::cout << "Rotated string to the left: " << rotatedString << std::endl;

    return 0;
}