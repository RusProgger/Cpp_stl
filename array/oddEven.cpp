#include <array>
#include <print>

int main() {

    std::array<int, 10> numbers = {90, 1, 5, 3, 2, 4, 6, 10, 7, 8};


    // получаем доступ к елементу массива 

    std::print("Element array: {}", numbers.at(2)); // 5

    // вывод четных и нечетных чисел из массива

    int odd = 0;
    int even = 0;

    for(const auto& num : numbers) {
        if(num % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    return 0;
}