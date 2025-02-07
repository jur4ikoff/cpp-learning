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

int main(void)
{
    int rc = 0;
    test_2();
    return rc;
}