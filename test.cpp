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
    int m_nData;

public:
    CTest(int nParam) : m_nData(nParam) {
        std::cout << "CTest::CTest()" << std::endl;
    }

    ~CTest() {
        std::cout << "CTest::~CTest()" << std::endl;
    }
};

int main(int argc, char const *argv[]) {
    // CTest a; //컴파일 오류를 내보낸다 // 디폴트 생성자가 생략 되었기 때문
    std::cout << "Begin" << std::endl;
    CTest a(10);
    std::cout << "Before b" << std::endl;
    CTest b(20);
    std::cout << "End" << std::endl;
    return 0;
}
