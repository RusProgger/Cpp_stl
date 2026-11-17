#include <array>
#include <print>

int main() {

    std::array<int, 10> numbers = {90, 1, 5, 3, 2, 4, 6, 10, 7, 8};


    // получаем доступ к елементу массива 

    std::print("Element array: {}\n", numbers.at(2)); // 5

    // вывод четных и нечетных чисел из массива

    int odd = 0; // нечетное число
    int even = 0; // четное

    for(const auto& num : numbers) {
        if(num % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    // вывод чисел

    for(const auto& num : numbers) {
        if(num % 2 == 0) {
            std::print("Number even: {}\n", num);
        } 
    }

    std::print("\n---------- Output number ----------\n");
    // вывод нечётных чисел 

    for(const auto& num : numbers) {
        if(num % 2 != 0) {
            std::print("Number odd: {}\n", num);
        } 
    }
    // Вывод

    std::print("\nEven numbers: {}\n", even);
    std::print("\nOdd numbers: {}\n", odd);


    return 0;
}