#include <iostream>
#include <algorithm>

void sort012(int arr[], int size) {
    int low = 0;
    int high = size - 1;
    int mid = 0;

    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                std::swap(arr[low], arr[mid]);
                ++low;
                ++mid;
                break;
            case 1:
                ++mid;
                break;
            case 2:
                std::swap(arr[mid], arr[high]);
                --high;
                break;
        }
    }
}

int main() {
    const int size = 6; 
    int arr[size];

    // Input elements into the array (0s, 1s, and 2s)
    std::cout << "Enter " << size << " elements (0s, 1s, and 2s):\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    sort012(arr, size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}