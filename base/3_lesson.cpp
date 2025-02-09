#include <iostream>
#include <cmath>

#define ERR_OK 0
#define EPS 10e-9

void test_1(void)
{
    double a = 0.2, b;
    std::cin >> b;
    if (std::abs(a - b) < EPS)
        std::cout << "Equal" << std::endl;
    else
        std::cout << "Not equal" << std::endl;
}

void test_2()
{
    std::string line;
    std::getline(std::cin, line);
    for (char i : line)
    {
        std::cout << i << "\t" << static_cast<int>(i) << std::endl;
    }
}

int task_1(void)
{
    int x1, x2, y1, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    if ((x1 != x2 && y1 == y2) || (x1 == x2 && y1 != y2) || (x1 == x2 && y1 == y2))
    {
        std::cout << "YES" << std::endl;
    }
    else if (x2 - x1 == y2 - y1 || x1 - x2 == y2 - y1 || x2 - x1 == y1 - y2)
    {
        std::cout << "YES" << std::endl;
    }
    else
        std::cout << "NO" << std::endl;
    return 0;
}

int task_2(void)
{
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0)
    {
        std::cout << "NO" << std::endl;
        return 0;
    }

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        std::cout << "UNDEFINED" << std::endl;
        return 0;
    }

    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}

// Функция проверяет високосный ли год
static inline bool is_leap_year(int year)
{
    if (year % 400 == 0)
        return true;
    else if (year % 4 == 0 && year % 100 != 0)
        return true;

    return false;
}

// С экрана вводиться год и номер месяца, нужно узнать сколько в нем дней
int get_day_count_by_month(int month, int year)
{
    bool is_leap = is_leap_year(year);

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        std::cout << "31" << std::endl;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        std::cout << "30" << std::endl;
        break;
    case 2:
        if (is_leap)
            std::cout << "29" << std::endl;
        else
            std::cout << "28" << std::endl;

        break;
    }
    return 0;
}

// Вывод календаря на месяц
int print_calendar(void)
{
    int n, k; // n - number of first day [1, 7], k - count of days <= 99
    std::cin >> n >> k;

    for (size_t i = 1; i < n; i++)
    {
        std::cout << "   ";
    }

    int number = 1;
    for (size_t i = n; i <= 7 && number <= k; i++)
    {
        if (i < 7 && number < k)
            std::cout << " " << number << " ";
        else
            std::cout << " " << number << std::endl;
        number++;
    }

    size_t iter = 0;
    for (; number <= k; number++)
    {
        if (iter != 0)
            std::cout << " ";
        if (number < 10)
            std::cout << " " << number;
        else
            std::cout << number;

        if (iter == 6)
        {
            std::cout << std::endl;
            iter = 0;
        }
        else
            iter++;
    }
    std::cout << std::endl;

    return 0;
}

int digit_sum(void)
{
    int n;
    std::cin >> n;
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    std::cout << sum <<  std::endl;
    return 0;
}

int logariphm(void)
{
    int n;
    double res = 0;
    std::cin >> n;

    for (size_t i = 1; i <= static_cast<size_t>(n); i++)
    {
        
        res = res + static_cast<double>(pow(-1, i + 1)) / i; 
    }

    std::cout << res << std::endl;
    return 0;
}

int main(void)
{
    int rc = ERR_OK;
    // test_1();
    //  test_2();
    //  task_1();
    // task_2();
    // print_calenda();
    logariphm();
    return rc;
}