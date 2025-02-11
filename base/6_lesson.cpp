// Контейнер

#include <iostream>
#include <vector>
#include <string>

template <typename Container>
void Print(const Container &data, std::string delimeter)
{
    bool first = true;
    for (auto i = std::begin(data); i < std::end(data); i++)
    {
        if (!first)
            std::cout << delimeter;

        std::cout << *i;
        if (first)
            first = false;
    }
}

int main(void)
{
    std::vector<int> data = {1, 2, 3, 4};
    Print(data, ", "); // 1, 2, 3, 4
    return 0;
}