#include <iostream>
#include <limits>

template <typename T> 
void test_1()
{
    std::cout << std::numeric_limits<T>::min() << " " << std::numeric_limits<T>::max() << std::endl;
}

auto main() -> int
{
    int rc = 0;
    int value;
    test_1<decltype(value)>();
    return rc;
}