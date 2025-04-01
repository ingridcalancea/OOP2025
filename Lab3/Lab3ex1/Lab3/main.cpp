#include <stdio.h>
#include "Math.h"
#define _CRT_SECURE_NO_WARNINGS

int main() {
    std::cout << Math::Add(2, 3) << std::endl;
    std::cout << Math::Add(2, 3, 4) << std::endl;
    std::cout << Math::Add(2.5, 3.5) << std::endl;
    std::cout << Math::Add(1.1, 2.2, 3.3) << std::endl;
    std::cout << Math::Mul(2, 3) << std::endl;
    std::cout << Math::Mul(2, 3, 4) << std::endl;
    std::cout << Math::Mul(2.5, 3.5) << std::endl;
    std::cout << Math::Mul(1.1, 2.2, 3.3) << std::endl;
    std::cout << Math::Add(4, 1, 2, 3, 4) << std::endl;
    
    char* concatStr = Math::Add("Hello, ", "World!");
    if (concatStr) {
        std::cout << concatStr << std::endl;
        free(concatStr);
    }
    return 0;
}
