#include <iostream>
#include <climits>

int main() {
    const int size = 6;
    int arr[size];

    std::cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int minElement = arr[0];
    int maxElement = arr[0];
    
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    std::cout << "Minimum element: " << minElement << std::endl;
    std::cout << "Maximum element: " << maxElement << std::endl;

    return 0;
}