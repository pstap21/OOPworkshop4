#include <iostream>
#include <stdbool.h>

int* readNumbers(int length){
    int* arr = new int[length];

    for (int i = 0; i < length; i++){
        std::cin >> arr[i];
    }

    return arr;
   
}

void printNumbers(int* numbers, int length){
    for (int i= 0; i < length; i++) {
        std::cout << i << " " << numbers[i] << std::endl;
    }
}

bool equalsArray(int *numbers1, int *numbers2, int length){
// if two array of the smae length > 0 return true if every no.
// in the first array is equal to the same index in the 2nd array
if (length < 1) {
    return false;
}

for( int i=0; i < length; i++){
    if (numbers1[i] != numbers2[i]) {
        return false;
    }
}

return true;
}


