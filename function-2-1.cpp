#include <iostream>


int* readNumbers(){
        int* numbers = new int[10]; 

        std::cout << "Please enter 10 numbers:" << std::endl;

    for (int i = 0; i < 10; i++) {
        std::cout << "Enter number" << (i+1) << ":";
        std::cin >> numbers[i]; // Read input
    }
    return numbers;
}

void hexDigits( int* numbers, int length){
    for (int i = 0; i < length; i++){
        char hexLetter;

        //convert numbers to hex numbers/letters
        switch (numbers[i]) {
            case 0: hexLetter = '0'; break;
            case 1: hexLetter = '1'; break;
            case 2: hexLetter = '2'; break;
            case 3: hexLetter = '3'; break;
            case 4: hexLetter = '4'; break;
            case 5: hexLetter = '5'; break;
            case 6: hexLetter = '6'; break;
            case 7: hexLetter = '7'; break;
            case 8: hexLetter = '8'; break;
            case 9: hexLetter = '9'; break;
            case 10: hexLetter = 'A'; break;
            case 11: hexLetter = 'B'; break;
            case 12: hexLetter = 'C'; break;
            case 13: hexLetter = 'D'; break;
            case 14: hexLetter = 'E'; break;
            case 15: hexLetter = 'F'; break;
            default: hexLetter = '?'; break;

            
        }
        std::cout << i << numbers[i] << " " <<hexLetter << std::endl;
    }
}