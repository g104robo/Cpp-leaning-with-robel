#include <iostream>
#include "class-study.hpp"

void CTest::func()
{
    std::cout << "a: " << a << std::endl;
    return;
}

int main()
{
    CTest c_test;
    c_test.func();

    return 0;
}
