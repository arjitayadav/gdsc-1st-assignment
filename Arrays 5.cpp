#include <iostream>
#include <unordered_set>

int findDuplicate(const int arr[], int size) {
    std::unordered_set<int> seen;

    for (int i = 0; i < size; ++i) {
        
        if (seen.find(arr[i]) != seen.end()) {
            return arr[i];
        }

        seen.insert(arr[i]);
    }

    return -1; 
}

int main() {
    const int size = 8; 
    int arr[size];

    std::cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int duplicate = findDuplicate(arr, size);

    if (duplicate != -1) {
        std::cout << "Duplicate number: " << duplicate << std::endl;
    } else {
        std::cout << "No duplicate found in the array.\n";
    }

    return 0;
}