#include <iostream>

void Shape01(int size)
{
    // 1
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            if (i >= j)
                std::cout << "* ";
            else
                std::cout << "  ";
        std::cout << "\n";
    }
    std::cout << "\n";
}



int main()
{
    const int size{ 11 };

    int answer;
    do {
        std::cout << "1 - shape 1\n";
        std::cout << "2 - shape 2\n";
        std::cout << "3 - shape 3\n";
        std::cout << "4 - shape 4\n";
        std::cout << "5 - shape 5\n";
        std::cout << "6 - shape 6\n";
        std::cout << "0 - exit\n";

        std::cout << "you choise: ";
        std::cin >> answer;

        switch (answer)
        {
        case 1:
            Shape01(size); break;
        default:
            break;
        }

    } while (answer);

    
    
    // 2
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            if (i <= j)
                std::cout << "* ";
            else
                std::cout << "  ";
        std::cout << "\n";
    }
    std::cout << "\n";
    // 3
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            if (i <= size - j - 1)
                std::cout << "* ";
            else
                std::cout << "  ";
        std::cout << "\n";
    }
    std::cout << "\n";

    // 4
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            if (i >= size - j - 1)
                std::cout << "* ";
            else
                std::cout << "  ";
        std::cout << "\n";
    }
    std::cout << "\n";

    // 5
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            if (i >= j && i <= size - j - 1)
                std::cout << "* ";
            else
                std::cout << "  ";
        std::cout << "\n";
    }
    std::cout << "\n";

    //6
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            if (i <= j && i <= size - j - 1)
                std::cout << "* ";
            else
                std::cout << "  ";
        std::cout << "\n";
    }
    std::cout << "\n";

    //7
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            if (i <= j && i >= size - j - 1)
                std::cout << "* ";
            else
                std::cout << "  ";
        std::cout << "\n";
    }
    std::cout << "\n";

    //8
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            if (i >= j && i >= size - j - 1)
                std::cout << "* ";
            else
                std::cout << "  ";
        std::cout << "\n";
    }
    std::cout << "\n";

    //9
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            if (i >= j && i <= size - j - 1 || i <= j && i >= size - j - 1)
                std::cout << "* ";
            else
                std::cout << "  ";
        std::cout << "\n";
    }
    std::cout << "\n";

    //10
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            if (i <= j && i <= size - j - 1 || i >= j && i >= size - j - 1)
                std::cout << "* ";
            else
                std::cout << "  ";
        std::cout << "\n";
    }
    std::cout << "\n";
}
