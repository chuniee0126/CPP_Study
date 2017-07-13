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
    CTest(int x, int y) : m_nData(x + y) {};
    // 디폴트 생성자는 없다.
    int GetData() {
        return m_nData;
    }
};

int main(int argc, char const *argv[]) {
    CTest a(10);
    CTest b(3, 4);

    std::cout << a.GetData() << std::endl;
    std::cout << b.GetData() << std::endl;

    return 0;
}
