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
    CMyData() {
        std::cout << "CMyData()" << std::endl;
    }

    // 복사 생성자 선언 및 정의
    CMyData(const CMyData& rhs) {  // : m_nData(rhs.m_nData)
        this->m_nData = rhs.m_nData;
        std::cout << "CMyData(const CMyData &)" << std::endl;
    }

    int GetData(void) const {
        return m_nData;
    }

    void SetData(int nParam) {
        m_nData = nParam;
    }
};

int main(int argc, char const *argv[]) {
    CMyData a;

    // 디폴트 생성자가 호출되는 경우
    a.SetData(10);

    // 복사 생성자가 호출되는 경우
    CMyData b(a);
    std::cout << b.GetData() << std::endl;

    return 0;
}
