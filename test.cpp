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
    int m_x = 0;
    int m_y = 0;

public:
    CTest(int x) {
        std::cout << "CTest(int)" << std::endl;

        // x값이 100이 넘는지 검사하고 넘으면 100으로 맞춘다.
        if (x > 100) x = 100;

        m_x = x;
    }

    CTest(int x, int y) : CTest(x) {
        std::cout << "CTest(int, int)" << std::endl;

        // y값이 200이 넘는지 검사하고 넘으면 200으로 맞춘다.
        if (y > 200) y = 200;

        m_y = y;
    }

    void Print() {
        std::cout << "X :" << m_x << std::endl;
        std::cout << "Y :" << m_y << std::endl;
    }
};

int main(int argc, char const *argv[]) {
    CTest ptBegin(110);

    ptBegin.Print();

    CTest ptEnd(110, 250);

    ptEnd.Print();

    return 0;
}
