#include <iostream>
#include <array>
#include <print>


int main() {
    std::array<int, 10> number = {10, 5, 2, 1, 9, 3, 7, 4, 6, 8};

    // вывод массива

    std::print("\n---------- Array ----------\n\n");

    for(int i = 0; i < number.size(); i++) {
        std::print("{} ", number[i]);
    }

    std::print("\n\n---------- Array sorted ----------\n\n");


    return 0;
}