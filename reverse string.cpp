#include <iostream>
#include <string>

void reverseString(std::string &str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        std::swap(str[start], str[end]);

        ++start;
        --end;
    }
}

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    reverseString(input);

    std::cout << "Reversed string: " << input << std::endl;

    return 0;
}