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
    CTest(int nParam) : m_nData(nParam) {}

    ~CTest() {}

    // 상수형 메서드로 선언 및 정의했다.
    // 상수화된 메서드는 멤버 변수에 읽기 접근은 가능하지만 쓰기는 허용되지 않는다.
    int GetData() const {
        // 멤버 변수의 값을 읽을 수는 있지만 쓸 수는 없다.
        return m_nData;
    }

private:
    int m_nData = 0;
};


int main(int argc, char const *argv[]) {
    CTest a(10);

    std::cout << a.GetData() << std::endl;

    return 0;
}
