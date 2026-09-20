#include <print>
#include <stack>
#include <iostream>

int main() {    

    int number;
    std::stack<int> user_info;

    std::print("Enter number stack: ");
    std::cin >> number;

    for(int i = 0; i < number; i++) {
        int user_value;
        std::cin >> user_value;
        user_info.push(user_value);
    }

    while(!user_info.empty()) {
        std::print("Stack user: {}\n", user_info.top());
        user_info.pop();
    }




    std::cin.get();
    return 0;
}