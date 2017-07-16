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

class CTest {
private:
    int m_nData = 0;

public:
    CTest(int nParam) : m_nData(nParam) {
        std::cout << "CTest(int)" << std::endl;
    }

    CTest(const CTest& rhs) : m_nData(rhs.m_nData) {
        std::cout << "CTest(const CTest &)" << std::endl;
    }

    // 읽기 전용인 상수형 메서드
    int GetData() const {
        return m_nData;
    }

    // 멤버 변수에 쓰기를 시도하는 메서드
    void SetData(int nParam) {
        m_nData = nParam;
    }
};

void TestFunc(CTest& param) {
    std::cout << "TestFunc()" << std::endl;

    // 피호출자 함수에서 매개변수 인스턴스의 값을 변경한다.
    param.SetData(20);
}

//
int main(int argc, char const *argv[]) {
    std::cout << "*******Begin*******" << std::endl;
    CTest a(10);
    TestFunc(a);

    // 함수 호출 후 a의 값을 출력한다.
    std::cout << "a: " << a.GetData() << '\n';

    std::cout << "*******End*******" << std::endl;

    return 0;
}
