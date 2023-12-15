#include <iostream>
#include <vector>
#include <string>

template <class T>
void move_vectors(std::vector <T>& lhs, std::vector <T>& rhs) {
    rhs = std::move(lhs);
}

int main()
{
    std::vector <std::string> one = { "test_string1", "test_string2" };
    std::vector <std::string> two;
    move_vectors(one, two);

    for (const auto elem : two) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}