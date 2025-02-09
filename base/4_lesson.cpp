#include <algorithm>
#include <cctype>
#include <iostream>
#include <vector>

#define END std::endl

void test_vector_1()
{
    std::vector<int> data = { 1, 2, 3, 4, 5 };
    for (int elem : data)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

void test_vector_2()
{
    std::vector<int> data = { 1, 2, 3, 4, 5 };
    for (int elem : data)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    std::cout << data.size() << std::endl;
}

// Сортировка вектора
void test_vector_3()
{
    std::vector<int> data = { 1, 2435423, 1, 2423, 2, 34, 52, 1, 2, 3 };

    // std::sort(data.begin(), data.end());
    std::sort(data.rbegin(), data.rend()); //  Обратка
    // std::ranges::sort(data); // В C++20

    for (size_t i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

// строки
void test_vector_4()
{
    std::string name = "Jur4ik";
    name += ' ';
    name += "Design";

    std::cout << name << END;

    // std::string sub1 = name.substr(5, 3);
    // std::string sub2 = name.substr(5);
    // std::cout << sub1 << END;
    //  std::cout << sub2 << END;

    // size_t pos1 = name.find(' ');
    //  std::cout << pos1 << END;

    // size_t pos2 = name.find('#');
    // std::cout << std::string::npos << END;

    name.replace(0, 7, ".");
    std::cout << name << END;
}

int password_check()
{
    std::string password;
    std::cin >> password;

    if (password.size() < 8 || password.size() > 14)
    {
        std::cout << "NO" << std::endl;
        return 0;
    }

    for (size_t i = 0; i < password.size(); i++)
    {
        int ascii_code = password[i];
        if (ascii_code < 33 || ascii_code > 126)
        {
            std::cout << "NO" << std::endl;
            return 0;
        }
    }

    int is_upper = 0;
    int is_lower = 0;
    int is_digit = 0;
    int is_other = 0;

    for (size_t i = 0; i < password.size(); i++)
    {
        if (isupper(password[i]))
            is_upper = 1;

        if (islower(password[i]))
            is_lower = 1;

        if (isdigit(password[i]))
            is_digit = 1;

        if (!isalnum(password[i]))
            is_other = 1;
    }

    if (is_upper + is_lower + is_digit + is_other >= 3)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}

int task_3(void)
{
    size_t size = 0;
    std::vector<int> data;

    std::cin >> size;

    int x;
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> x;
        data.push_back(x);
    }

    std::vector<int> res(size);
    for (size_t i = 0; i < size; i++)
    {
        res[data[i] - 1] = i + 1;
    }

    // output
    for (size_t i = 0; i < size; i++)
    {
        if (i + 1 < size)
            std::cout << res[i] << " ";
        else
            std::cout << res[i] << std::endl;
    }
    return 0;
}

int check_palindrome(void)
{
    std::string s;
    std::getline(std::cin, s);

    int i = 0, j = static_cast<int>(s.size()) - 1;
    bool is_palindrome = true;
    while (i < j)
    {
        if (s[i] == ' ')
            i++;
        else if (s[j] == ' ')
            j--;
        else if (s[i] != s[j])
        {
            is_palindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (is_palindrome)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    return 0;
}

int main(void)
{
    int rc = 0;
    check_palindrome();
    return rc;
}
