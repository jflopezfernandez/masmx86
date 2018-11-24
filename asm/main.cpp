
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include <iostream>

extern "C" int sum(int a, int b);


int main()
{
    int a = 0;
    int b = 0;

    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';

    int s = sum(a, b);

    std::cout << "\na + b = " << s << '\n';

    return EXIT_SUCCESS;
}