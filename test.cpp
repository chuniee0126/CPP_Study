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
    int *m_pnData = nullptr;

public:
    explicit CMyData(int nParam) {
        m_pnData = new int (nParam);
    }

    ~CMyData() {
        delete m_pnData;
    }

    // 단순 대입 연산자 다중 정의
    CMyData& operator=(const CMyData& rhs) {
        // r-value가 자신이면 대입을 수행하지 않는다.
        if (this == &rhs) return *this;

        // 본래 가리키던 메모리를 삭데하고
        delete m_pnData;

        // 새로 할당한 메모리에 값을 저장한다.
        m_pnData = new int (*rhs.m_pnData);

        return *this;
    }

    CMyData& operator+=(const CMyData& rhs) {
        int *pnNewData = new int (*m_pnData);

        // 누적할 값 처리
        *pnNewData += *rhs.m_pnData;

        // 기존 데이터 삭제
        delete m_pnData;
        m_pnData = pnNewData;

        return *this;
    }

    operator int(void) const {
        return *m_pnData;
    }
};

int main(int argc, char const *argv[]) {
    CMyData a(0), b(5), c(10);

    a += b;
    a += c;
    std::cout << a << '\n';

    return 0;
}
