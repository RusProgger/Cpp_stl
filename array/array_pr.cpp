#include <array>
#include <print>

int main() {

    int count = 0;
    std::array<int, 5> numbers = {10, 20, 5, 15, 30};

    for(int i = 0; i < numbers.size(); i++) {
        count += numbers[i];
    }

    std::print("Summa: {}\n", count);
    std::print("Size byte: {}", sizeof(numbers));
    std::print("Size item: {}", size(numbers));
    return 0;
}