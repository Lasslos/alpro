#include <iostream>

int main(int argc, char const *argv[])
{
    int geburtsjahr = 1912;
    while (true)
    {
        std::cout << "Was ist das Geburtsjahr von Alan?" << std::endl;
        int guess = 0;
        std::cin >> guess;
        if (guess == geburtsjahr)
        {
            std::cout << "Richtig!" << std::endl;
            return 0;
        }
        else if (geburtsjahr > guess)
        {
            std::cout << "Zu alt!" << std::endl;
        }
        else
        {
            std::cout << "Zu jung!" << std::endl;
        }
    }
}
