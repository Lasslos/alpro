#include <iostream>

int main(int argc, char const *argv[])
{
    int n = 5;
    /* Prints trinangle pattern with n rows like this:
        *
        **
        ***
        ****
        *****
    */
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
    return 0;
}
