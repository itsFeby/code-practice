#include <iostream>
#include <string>

int main()
{
    std::string text;
    std::cout << "Enter a text: ";
    std::getline(std::cin, text);

    int len = text.length();

    for (int i = 1; i <= len; ++i){
        std::cout << std::string(len -i, ' ');
        std::cout << text.substr(0, i) << std::endl;
    }

    for (int i = len; i>= 1; --i){
        std::cout << std::string(len -i, ' ');
        std::cout << text.substr(0, i) << std::endl;
    }

    return 0;
}
