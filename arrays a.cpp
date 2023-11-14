#include <iostream>

void concatenateArrays(const int arr1[], int size1, const int arr2[], int size2, int result[]) {
    
    for (int i = 0; i < size1; ++i) {
        result[i] = arr1[i];
    }

    for (int i = 0; i < size2; ++i) {
        result[size1 + i] = arr2[i];
    }
}

int main() {
    const int size1 = 8; 
    const int size2 = 3; 

    int arr1[size1] = {1, 2, 3, 4, 5,6,7,8}; 
    int arr2[size2] = {9,10,11};        

    const int sizeResult = size1 + size2;

    int result[sizeResult];

    concatenateArrays(arr1, size1, arr2, size2, result);

    std::cout << "Concatenated array: ";
    for (int i = 0; i < sizeResult; ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}