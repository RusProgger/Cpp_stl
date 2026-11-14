#include <array>
#include <print>


int main() {

    std::array<int, 7> numbers = {12, 5, 90, 3, 45, 1, 27}; 

    int arrayMin = numbers[0];
    int arrayMax = numbers[0];

    // loop 

    for(int i  = 0; i < numbers.size(); i++) {

        if(numbers[i] > arrayMax) {
            arrayMax = numbers[i];
        } else if(numbers[i] < arrayMin) {
            arrayMin = numbers[i];
        }

    }

    std::print("Min: {}\n", arrayMin);
    std::print("Max: {}\n", arrayMax);

    return 0;
}