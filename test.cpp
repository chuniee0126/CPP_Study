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
    int m_nData;

    // 정적 멤버 변수 선언 (정의는 아니다!)
    static int m_nCount;

public:
    CTest(int nParam) : m_nData(nParam) {
        m_nCount++;
    }

    int  GetData() {
        return m_nData;
    };
    void ResetCount() {
        m_nCount = 0;
    };

    // 정적 메서드 선언 및 정의
    static int GetCount() {
        return m_nCount;
    }
};

// CTest 클래스의 정적 멤버 변수 정의
int CTest::m_nCount = 0;

int main(int argc, char const *argv[]) {
    CTest a(5), b(10);

    // 정적 멤버에 접근
    std::cout << a.GetCount() << std::endl;
    b.ResetCount();

    // 정적 멤버에 접금, 인스턴스 없이도 접근 가능!
    std::cout << CTest::GetCount() << '\n';

    return 0;
}
