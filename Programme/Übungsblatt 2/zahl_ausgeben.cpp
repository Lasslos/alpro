#include <iostream>

int main(int argc, char const *argv[])
{
    int n = 3;
    switch (n)
    {
    case 0:
        std::cout << "Null" << std::endl;
        break;
    case 1:
        std::cout << "Eins" << std::endl;
        break;
    case 2:
        std::cout << "Zwei" << std::endl;
        break;
    case 3:
        std::cout << "Drei" << std::endl;
        break;
    case 4:
        std::cout << "Vier" << std::endl;
        break;
    default:
        break;
    }
    return 0;
}
