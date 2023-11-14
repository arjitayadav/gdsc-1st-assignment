#include <iostream>
#include <algorithm>
#include <cctype>

void toLowerCase(std::string &str) {
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
}

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    toLowerCase(input);
    std::cout << "String in lowercase: " << input << std::endl;

    return 0;
}
