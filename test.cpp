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
public:
    CTestData(int nParam, char *pszName) : m_nData(nParam), m_pszName(pszName) {
        std::cout << "CTestData(int): " << m_pszName << '\n';
    }

    ~CTestData() {
        std::cout << "~CTestData(): " << m_pszName << '\n';
    }

    CTestData(const CTestData& rhs) : m_nData(rhs.m_nData), m_pszName(rhs.m_pszName) {
        std::cout << "CTestData(const CTestData &): " << m_pszName << '\n';
    }

    CTestData& operator=(const CTestData& rhs) {
        std::cout << "operator=" << '\n';

        // 값은 변경하지만 이름은 그대로 둔다.
        m_nData = rhs.m_nData;

        return *this;
    }

    int GetData() const {
        return m_nData;
    }

    void SetData(int nParam) {
        m_nData = nParam;
    }

private:
    int m_nData = 0;
    // 변수 이름을 저장하기 위한 함수
    char *m_pszName = nullptr;
};

// CTestData 객체를 반환하는 함수다.
CTestData TestFunc(int nParam) {
    // CTestData 클래스 인스턴스인 a는 지역 변수다.
    // 따라서 함수가 반환되면 소멸한다.
    CTestData a(nParam, (char *)"a");

    return a;
}

int main(int argc, char const *argv[]) {
    CTestData b(5, (char *)"b");

    std::cout << "******Before******" << '\n';

    // 함수가 반환되면서 임시 객체가 생성됐다가 대입 연산 후 즉시 소멸한다.
    b = TestFunc(10);
    std::cout << "******After******" << '\n';
    std::cout << b.GetData() << '\n';

    return 0;
}
