// main.cpp
#include <iostream>
#include "teest.h"

int main() {
    Calculator calc;
    std::cout << "Add: " << calc.add(5, 3) << std::endl;
    std::cout << "Subtract: " << calc.subtract(5, 3) << std::endl;
    return 0;
}
