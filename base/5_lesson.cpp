// Функции
#include <iostream>
#include <vector>
#include <utility>
#include <string>

typedef std::vector<std::string> string_arr_t;

std::string my_strcat(const string_arr_t &data)
{
    std::string result;
    for (const auto &el : data)
    {
        result += el;
    }

    return result;
}

std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int>> &matrix)
{
    std::pair<size_t, size_t> res = {0, 0};
    int max = matrix[0][0];

    for (size_t i = 0; i < matrix.size(); i++)
    {
        for (size_t j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
                res = {i, j};
            }
        }
    }

    return res;
}

static std::string common_prefix(const std::string &lhs, const std::string &rhs)
{
    size_t index = 0;
    while (index < lhs.size() && index < rhs.size() && lhs[index] == rhs[index])
        index++;

    return lhs.substr(0, index);
}

std::string CommonPrefix(const std::vector<std::string> &words)
{
    std::string prefix;
    if (words.empty())
        return prefix;

    prefix += words[0];
    for (size_t i = 1; i < words.size() && !prefix.empty(); i++)
    {
        prefix = common_prefix(prefix, words[i]);
    }

    return prefix;
}

int test_1()
{
    string_arr_t data = {"abra", "cada", "bra"};
    std::cout << my_strcat(data) << std::endl; // abracadabra
    return 0;
}

int main(void)
{
    std::vector<std::string> words = {"apecot", "apelsin", "apele"};

    std::string res = CommonPrefix(words);
    std::cout << res << std::endl;
    return 0;
}