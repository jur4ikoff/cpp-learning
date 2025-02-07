#include <iostream>

void print_string(std::string string)
{
    std::cout << string << std::endl;
}

void test_1(void)
{
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "My name is " << name << "!\n";
}

void test_2(void)
{
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "My name is " << name << "!\n";
}

void task_1(void)
{
    std::string text = "C++ is a general-purpose programming language with a bias towards systems programming that\n\
  - is a better C\n\
  - supports data abstraction\n\
  - supports object-oriented programming\n\
  - supports generic programming.\n";

    std::cout << text;
}

int task_2(void)
{
    int a, b;
    std::cin >> a >> b;
    std::cout << a + b;
    return 0;
}

int main(void)
{
    int rc = 0;
    task_2();
    return rc;
}
