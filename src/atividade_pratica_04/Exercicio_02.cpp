#include <iostream>

int main(void)
{
    char ch = '0';
    std::cout << ch << "..." << (int)ch << std::endl;
    ch = '1';
    std::cout << ch << "..." << (int)ch++ << std::endl;
    std::cout << ch << "..." << (int)ch++ << std::endl;
    std::cout << ch << "..." << (int)ch++ << std::endl;
    std::cout << ch << "..." << (int)ch++ << std::endl;
    std::cout << ch << "..." << (int)ch++ << std::endl;
    std::cout << ch << "..." << (int)ch++ << std::endl;
    std::cout << ch << "..." << (int)ch++ << std::endl;
    std::cout << ch << "..." << (int)ch++ << std::endl;
    std::cout << ch << "..." << (int)ch << std::endl;

    int j;
    2 + 2;
    std::cout << "entre um valor inteiro: " << std::endl;
    std::cin >> j;
    (j % 2 == 0) ? std::cout << "par" << std::endl : std::cout << "impar" << std::endl;
    ch = (ch == '0') ? '9' : (ch == '9') ? '0' : ch;
    if (ch == '0')
    {
        ch = '9';
        std::cout << "O caracter ch não pode ser 0" << std::endl;

    }
    
    return 0;

}