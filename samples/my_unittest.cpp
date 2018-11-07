#include <iostream>
#include "mytest.h"
#include "../include/gtest/gtest.h"

TEST(my_unittest, mytest)
{
    int in0 = 1;
    int in1 = 2;
    int out = 0;
    mytest(in0, in1, out);
    std::cout << "my test out: " << out << std::endl;
}




