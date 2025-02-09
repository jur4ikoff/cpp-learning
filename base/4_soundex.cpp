#include <cctype>
#include <iostream>

void delete_el(std::string *source, char el)
{
    while (true)
    {
        size_t pos = source->find(el);
        if (pos == std::string::npos)
            break;

        source->erase(pos, 1);
    }
}

void replace_all(std::string *source, char el, char *el_to_replace)
{
    while (true)
    {
        size_t pos = source->find(el);
        if (pos == std::string::npos)
            break;

        source->replace(pos, 1, el_to_replace);
    }
}

void merge_same(std::string *source)
{
    for (size_t i = 0; i + 1 < source->size(); i++)
    {
        if ((*source)[i] == (*source)[i + 1])
        {
            source->erase(i, 1);
            i--;
        }
    }
}

void add_nulls(std::string *source)
{
    while (source->size() < 4)
    {
        *source += '0';
    }
}

int main(void)
{
    std::string word;
    std::cin >> word;

    char start = word[0];

    delete_el(&word, 'a');
    delete_el(&word, 'e');
    delete_el(&word, 'h');
    delete_el(&word, 'i');
    delete_el(&word, 'o');
    delete_el(&word, 'u');
    delete_el(&word, 'w');
    delete_el(&word, 'y');
    word = start + word;

    replace_all(&word, 'b', (char *)"1");
    replace_all(&word, 'f', (char *)"1");
    replace_all(&word, 'p', (char *)"1");
    replace_all(&word, 'v', (char *)"1");

    replace_all(&word, 'c', (char *)"2");
    replace_all(&word, 'g', (char *)"2");
    replace_all(&word, 'j', (char *)"2");
    replace_all(&word, 'k', (char *)"2");
    replace_all(&word, 'q', (char *)"2");
    replace_all(&word, 's', (char *)"2");
    replace_all(&word, 'x', (char *)"2");
    replace_all(&word, 'z', (char *)"2");

    replace_all(&word, 'd', (char *)"3");
    replace_all(&word, 't', (char *)"3");

    replace_all(&word, 'l', (char *)"4");
    replace_all(&word, 'm', (char *)"5");
    replace_all(&word, 'n', (char *)"5");
    replace_all(&word, 'r', (char *)"6");

    // std::cout << word << std::endl;

    merge_same(&word);

    add_nulls(&word);
    word.erase(4);

    std::cout << word << std::endl;
    return 0;
}
