#include <iostream>
#include <tchar.h>
#include <math.h>

int _tmain(int argc, _TCHAR* argv[])
{
    float a, b, c;
    system("cls");
    std::cout << "Input coefficients of square equation\r\n";
    std::cin >> a >> b >> c;
    std::cout << "Try to solve the equation : "
        << a << " * x ^ 2 + "
        << b << " * x + " << c << " = 0\r\n";
    if ((a == 0) && (b == 0) && (c == 0))
    {
        std::cout << "The answer is any number\r\n";
    }
    else if ((a == 0) && (b == 0) && (c != 0))
    {
        std::cout << "The equation has no solution\r\n";
    }
    else if ((a == 0) && (b != 0) && (c != 0))
    {
        std::cout << "The equation has the following solution : " << (-c / b)
        	<< "\r\n";
    }
    else
    {
        float d = b * b - 4 * a * c;
        int sign = (d > 0) - (d < 0);
        int nRoots = sign + 1;
        if (nRoots > 0)
        {
            float x1 = (-b - sqrt(d)) / (2 * a);
            float x2 = (-b + sqrt(d)) / (2 * a);
            std::cout << "The equation has the following roots : \r\n";
            std::cout << "x1 = " << x1 << "\r\n";
            std::cout << "x2 = " << x2 << "\r\n";
        }
        else
            std::cout << "The equation has no roots\r\n";
    }
    std::cin.ignore();
    std::cin.get();
    return 0;
}
