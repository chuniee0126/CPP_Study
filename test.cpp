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

class CTestData {
private:
    int m_nData = 0;

public:
    explicit CTestData(int nParam) : m_nData(nParam) {
        std::cout << "CTestData(int)" << std::endl;
    }

    // CTestData 클래스는 int 자료형으로 변환될 수 있다.
    explicit operator int(void) {
        return m_nData;
    }

    int GetData() const {
        return m_nData;
    }

    void SetData(int nParam) {
        m_nData = nParam;
    }
};

int main(int argc, char const *argv[]) {
    CTestData a(10);

    std::cout << a.GetData() << '\n';

    // CTestData 형식에서 int 자료형으로 변환될 수 있다.
    std::cout << a << '\n';
    std::cout << int(a) << '\n';
    std::cout << static_cast<int>(a) << '\n';

    return 0;
}
