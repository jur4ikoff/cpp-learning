#include <iostream>
#include <deque>
#include <vector>
#include <string>

int main(void)
{
    std::deque<std::string> data;

    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::string surname, position;
        std::cin >> surname >> position;

        if (position == "top")
        {
            data.push_front(surname);
        }
        else
        {
            data.push_back(surname);
        }

        int k;
        std::cin >> k;

        for (size_t i = 0; i < k; i++)
        {
            int x = 0;
            std::cin >> x;
            std::cout << data[x - 1] << std::endl;
        }
    }

    return 0;
}