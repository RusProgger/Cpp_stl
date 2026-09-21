#include <print>
#include <vector>
#include <iostream>
#include <windows.h>

void locale() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
}

/*

push_back(10); // добавить в конец
pop_back();    // удалить последний
empty();       // пустой?
size();        // количество элементов
numbers[0];    // доступ по индексу

*/

int main() {

    locale();

    std::print("Введите размер вектора: ");
    int count = 0;
    std::cin >> count; 

    std::vector<int> number(count);

    if(number.empty()) {
        std::print("Вектор пустой. \n");
        return 0;
    }

    for(int i = 0; i < count; i++) {
        int ver_user;
        std::print("Введите значение вектора {}: ", i + 1);
        std::cin >> ver_user;
    }

    




    return 0;
}