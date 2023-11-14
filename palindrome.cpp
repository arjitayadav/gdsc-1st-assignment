#include <iostream>
#include <cctype>

bool isPalindrome(const std::string &str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        while (!isalnum(str[start]) && start < end) {
            ++start;
        }

        while (!isalnum(str[end]) && start < end) {
            --end;
        }

        if (tolower(str[start]) != tolower(str[end])) {
            return false;
        }

        ++start;
        --end;
    }
    return true;
}

int main() {
    std::string input;

    
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "The string is a palindrome.\n";
    } else {
        std::cout << "The string is not a palindrome.\n";
    }

    return 0;
}