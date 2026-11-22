#include <print>
#include <vector>

int main() {

    // Создадим вектор 

    std::vector<std::string> name;

    name.push_back("Alex");
    name.push_back("Alena");

    for(const auto& i : name) {
        std::print("Name: {}", i);
    }

    return 0;
}