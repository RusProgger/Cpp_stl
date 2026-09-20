#include <print>
#include <stack>

int main() {    

    int number;
    std::stack<int> user_info;

    print("Enter number stack: ");
    std::cin >> number;

    for(int i = 0; i < number; i++) {
        int user_value;
        std::cin >> user_value;
        user_info.push(user_value);
    }

    


    std::cin.get();
    return 0;
}