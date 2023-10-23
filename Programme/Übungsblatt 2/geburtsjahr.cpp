#include <iostream>

int main(int argc, char const *argv[])
{
    int geburtsjahr = 1912;
    int jahr = 2023;
    while (true)
    {
        std::cout << "Wie alt wäre Alan Turing dieses Jahr geworden?" << std::endl;
        int guess = 0;
        std::cin >> guess;
        if (guess == jahr - geburtsjahr)
        {
            std::cout << "Richtig!" << std::endl;
            return 0;
        }
        else if (jahr - geburtsjahr > guess)
        {
            std::cout << "Älter!" << std::endl;
        }
        else
        {
            std::cout << "Jünger!" << std::endl;
        }
    }
}
