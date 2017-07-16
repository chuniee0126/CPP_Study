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
    CTestData() {
        std::cout << "CTestData():" << '\n';
    }

    ~CTestData() {
        std::cout << "~CTestData(): " << '\n';
    }

    CTestData(const CTestData& rhs) : m_nData(rhs.m_nData) {
        std::cout << "CTestData(const CTestData &): " << '\n';
    }

    // 이동 생성자
    CTestData(CTestData&& rhs) : m_nData(rhs.m_nData) {
        std::cout << "CTestData(CTestData &&): " << '\n';
    }

    // CTestData& operator=(const CTestData& rhs);
    // {
    // std::cout << "operator =" << '\n';
    //
    // m_nData = rhs.m_nData;
    //
    // return *this;
    // }

    int GetData() {
        return m_nData;
    }

    void SetData(int nParam) {
        m_nData = nParam;
    }

private:
    int m_nData = 0;
};


CTestData TestFunc(int nParam) {
    std::cout << "**TestFunc(): Begin***" << '\n';
    CTestData a;
    a.SetData(nParam);
    std::cout << "**TestFunc(): End***" << '\n';

    return a;
}

int main(int argc, char const *argv[]) {
    std::cout << "******Before******" << '\n';
    CTestData b = std::move(TestFunc(20));
    std::cout << "******After******" << '\n';
    // CTestData c(b);

    return 0;
}
