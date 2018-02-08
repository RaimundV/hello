#include <iostream>
#include <string>

int main()
{

    std::string name;
    auto number = 4;
    std::cout << "Iveskite savo varda: ";
    std::cin >> name;
    std::string hello;
    char lastChar = name.back();
    if(lastChar == 'a' || lastChar == 'e' || lastChar == 'i' || lastChar == 'o' || lastChar == 'u')
    {
            hello = "Sveika, " + name + "!";
    }
    else
    {
        hello = "Sveikas, " + name + "!";
    }

    for(int i = 0; i < hello.length() + number; i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;

    std::cout << "*";
    for(int x = 0; x < hello.length() + number/2; x++)
    {
        std::cout << " ";
    }
    std::cout << "*" << std::endl;

    std::cout << "* " << hello << " *" << std::endl;

    std::cout << "*";
    for(int x = 0; x < hello.length() + number/2; x++)
    {
        std::cout << " ";
    }
    std::cout << "*" << std::endl;

    for(int i = 0; i < hello.length() + number; i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;
    return 0;
}
