#include <iostream>
#include "class-study.hpp"

void CTest::printMemberNum()
{
    std::cout << "member_num_: " << member_num_ << std::endl;
    return;
}

int main()
{
    CTest c_test;
    c_test.setMenberNum(10);
    c_test.printMemberNum();

    return 0;
}
