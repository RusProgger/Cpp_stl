#include <iostream>
#include <array>


int main() {
    std::array<int, 10> number = {10, 5, 2, 1, 9, 3, 7, 4, 6, 8};

    // вывод массива

    for(int i = 0; i < 10; i++) {
        std::cout << number[i] << " ";
    }

    return 0;
}