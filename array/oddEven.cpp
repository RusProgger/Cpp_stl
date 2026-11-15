#include <array>
#include <print>

int main() {

    std::array<int, 10> numbers = {90, 1, 5, 3, 2, 4, 6, 10, 7, 8};


    // получаем доступ к елементу массива 

    std::print("Element array: {}", numbers.at(2)); // 5

    

    return 0;
}