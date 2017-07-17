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

class CMyData {
private:
    int m_nData = 0;

public:
    // 변환 생성자
    CMyData(int nParam) : m_nData(nParam) {
        std::cout << "CMyData(int)" << '\n';
    }

    // 복사 생성자
    CMyData(const CMyData& rhs) : m_nData(rhs.m_nData) {
        std::cout << "CMyData(const CMyData &)" << '\n';
    }

    // 이동 생성자
    CMyData(const CMyData&& rhs) : m_nData(rhs.m_nData) {
        std::cout << "CMyData(const CMyData &&)" << '\n';
    }

    // 형변환
    operator int() {
        return m_nData;
    }

    // +
    CMyData operator+(const CMyData& rhs) {
        std::cout << "operator+" << '\n';
        CMyData result(0);
        result.m_nData = this->m_nData + rhs.m_nData;

        return std::move(result);
    }

    CMyData& operator=(const CMyData& rhs) {
        std::cout << "operator=" << '\n';
        m_nData = rhs.m_nData;

        return *this;
    }
};

int main(int argc, char const *argv[]) {
    std::cout << "*********Begin**********" << '\n';
    CMyData a(0), b(3), c(4);

    // b+c 연산을 실행하면 이름 없는 임시 객체가 만들어지며
    // a에 대입하는 것은 이 임시 객체다.
    a = b + c;
    std::cout << a << '\n';
    std::cout << "*********End**********" << '\n';

    return 0;
}
