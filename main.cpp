#include <iostream>
#include "calc.h"

int main(int, char**) {
    Calc calc;
    int i= calc.add(1,1);
    std::cout << i << std::endl;
    return i;
}
