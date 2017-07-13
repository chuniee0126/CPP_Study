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
    int& m_nData;

public:
    CTest(int& rParam) : m_nData(rParam) {}

    int GetData() {
        return m_nData;
    }
};

int main(int argc, char const *argv[]) {
    int   a(10);
    CTest t(a);

    std::cout << t.GetData() << std::endl;

    // 참조 원본인 a의 값이 수정되었다.
    a = 20;
    std::cout << t.GetData() << std::endl;

    return 0;
}
