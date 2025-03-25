#include <iostream>
#include "function3.h"

int* readNumbers(int length);

int main() {
    int length = 10;
    std::cout << "Please enter 10 numbers for the first array" << std::endl;
    int *array1 = readNumbers(length);

    std::cout << "Please enter 10 numbers for the second array" << std::endl;
    int *array2 = readNumbers(length);

    bool result = equalsArray( array1, array2, length);
        std::cout << (result? "true" : "false") << std::endl;


        delete[] array1;
        delete[] array2;

        return 0;
    }
