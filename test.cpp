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
 *       Compiler:  g++
 *
 *         Author:  Chun Myong Park,
 *   Organization:
 *
 * =====================================================================================
 */
#include <cstdio>
#include <iostream>

// 제작자 코드
class CTest {
public:
    CTest() {
        std::cout << "CTest::CTest()" << std::endl;
    }

    ~CTest() {
        std::cout << "CTest::~CTest()" << std::endl;
    }
};

int main(int argc, char const *argv[]) {
    std::cout << "Begin" << std::endl;
    CTest a;
    std::cout << "End" << std::endl;

    return 0;
}
