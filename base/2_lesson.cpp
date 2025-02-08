#include <iostream>
#include <limits>

template <typename T> 
void test_1()
{
    std::cout << std::numeric_limits<T>::min() << " " << std::numeric_limits<T>::max() << std::endl;
}

auto test_2()
{
    int a = 6, b = 4;
    return static_cast<double>(a) / b;
}

void task_1(void)
{
    double sm;
    std::cin >> sm;
    double res = sm / 2.54;
    std::cout << res << std::endl;
}

void task_2(void)
{
    long long n;
    std::cin >> n;
    __int128_t result = (static_cast<__int128_t>(n) * (static_cast<__int128_t>(n) + 1)) / 2;
    std::cout << static_cast<long long>(result) << "\n";
}

auto main() -> int
{
    int rc = 0;
    // test_1<decltype(value)>();
    // std::cout << test_2() << std::endl;
    // task_1();
    task_2();
    return rc;
}