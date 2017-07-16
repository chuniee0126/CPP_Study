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
    // 포인터 멤버 데이터
    int *m_pnData = nullptr;

public:
    CTest(int nParam) {
        m_pnData  = new int;
        *m_pnData = nParam;
    }

    CTest(const CTest& rhs) {
        std::cout << "CTest(const CTest &)" << std::endl;
        m_pnData  = new int;
        *m_pnData = *rhs.m_pnData;
    }

    ~CTest() {
        Release();
    }

    int GetData() {
        if (m_pnData != NULL) return *m_pnData;
        return 0;
    }

    void Release() {
        if (m_pnData != NULL) delete m_pnData;
    }
};

//
int main(int argc, char const *argv[]) {
    CTest a(10);
    CTest b(20);

    // 단순 대입을 시도하면 모든 멤버의 값을 그대로 복사한다. (얕은 복사)
    a = b;
    std::cout << a.GetData() << std::endl;

    return 0;
}
