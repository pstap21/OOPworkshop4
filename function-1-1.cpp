#include <iostream>

int *readNumbers(){
    int* numbers = new int[10];

    std::cout << "Please enter 10 numbers" << std::endl;

    for ( int i = 0; i < 10; i++) {
        std::cout << "Enter number " << (i+ 1) << ":";
        std::cin >> numbers[i];

    }
    return numbers;
}

void printNumbers(int* numbers, int length){
    for (int i= 0; i < length; i++) {
        std::cout << i << " " << numbers[i] << std::endl;
    }
}