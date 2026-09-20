#include <print>
#include <stack>


/*
push(10);   // положить элемент наверх
pop();      // удалить верхний элемент
top();      // посмотреть верхний элемент
empty();    // проверить, пустой ли стек
size();     // количество элементов

*/

int main() {

    std::stack<int> number;
    number.push(100);
    number.push(300);
    number.push(50);

    while(!number.empty()) {
        std::print("Stack: {}\n", number.top());
        number.pop();
    }

    return 0;
}