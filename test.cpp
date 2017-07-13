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
    CTest(void);
    int m_nData = 5;
};

// 클래스 외부에서 디폴트 생성자 정의
CTest::CTest(void) {}

int main(int argc, char const *argv[]) {
    CTest a;

    std::cout << a.m_nData << std::endl;

    return 0;
}
