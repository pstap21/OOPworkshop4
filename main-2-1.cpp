#include <iostream>
# include "function2.h"
#include "function1.h"

int main(){
int *numbers =  readNumbers();
hexDigits(numbers, 10);
delete[] numbers;
return 0;
}