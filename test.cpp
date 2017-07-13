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
    CTest(int nParam) : m_nData(nParam) {};
    void PrintData() {
        // m_nData의 값을 출력한다.
        std::cout << m_nData << std::endl;

        // CTest 클래스의 멤버인  m_nData 멤버 값을 출력한다.
        std::cout << CTest::m_nData << std::endl;

        // 메서드를 호출한 인스턴스의 m_nData 멤버 값을 출력한다.
        std::cout << this->m_nData << std::endl;

        // 메서드를 호출한 인스턴스의 CTest 클래스 멤버 m_nData 를 출력한다.
        std::cout << this->CTest::m_nData << std::endl;
    }
};
int main(int argc, char const *argv[]) {
    CTest a(5), b(10);

    a.PrintData();
    b.PrintData();

    return 0;
}
