#include <iostream>
#include "function32.h"

int main() {
    int length = 10;
    std::cout << "Enter 10 numbers for the array: " << std::endl;

    int* array1 = readNumbers(length);
    int* reversedArray = reverseArray(array1, length);

    bool result = equalsArray(array1, reversedArray, length);
    std::cout << (result ? "true" : "false") << std::endl;

    delete[] array1;
    delete[] reversedArray;

    return 0;
}