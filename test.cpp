/*
 * =====================================================================================
 *
 *       Filename:  test.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2017년 07월 04일 21시 35분 18초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>

namespace Test {
    int g_nData = 100;

    void TestFunc(void)
    {
        std::cout << "Test::Testfunc()" << '\n';
    }
} /*Test */

int main(int argc, char const *argv[]) {
    Test::TestFunc();
    std::cout << Test::g_nData << std::endl;

    return 0;
}
