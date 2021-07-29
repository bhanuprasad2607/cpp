#include <iostream>

int sum(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    if (a > b)
    {
        return a - b;
    }
    else
    {
        return b - a;
    }
}

int multiply(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    if (b == 0)
    {
        std::cout << "denominator must not be zero" << std::endl;
    }
    else
    {
        return a / b;
    }
}

int modular_division(int a, int b)
{
    if (b == 0)
    {
        std::cout << "denominator must not be zero" << std::endl;
    }
    else
    {
        return a % b;
    }
}

// main function for arthimetic operations

int main()
{
    int a, b, result;
    std::cin >> a >> b;
    result = sum(a, b);
    std::cout << result << std::endl;
    result = subtract(a, b);
    std::cout << result << std::endl;
    result = multiply(a, b);
    std::cout << result << std::endl;
    result = division(a, b);
    std::cout << result << std::endl;
    result = modular_division(a, b);
    std::cout << result << std::endl;
}