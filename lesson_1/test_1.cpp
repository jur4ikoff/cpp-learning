#include <iostream>

void print_string(std::string string)
{
    std::cout << string << std::endl;
}

int main(void)
{
    int rc = 0;
    std::string test_str = "test";
    printf("%s\n", test_str.c_str());
    print_string(test_str);
    // print_string(test_str);
    return rc;
}