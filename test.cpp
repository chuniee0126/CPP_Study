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
    // 매개변수가 하나뿐인 생성자는 형변환이 가능하다.
    CTestData(int nParam) : m_nData(nParam) {
        std::cout << "CTestData(int)" << std::endl;
    }

    CTestData(const CTestData& rhs) : m_nData(rhs.GetData()) {}

    int GetData() const {
        return m_nData;
    }

    void SetData(int nParam) {
        m_nData = nParam;
    }
};

// 사용자 코드
// 매개변수가 클래스 형식이며 변환 생성이 가능하다.
void TestFunc(CTestData param) {
    std::cout << "TestFunc():" << param.GetData() << std::endl;
}

int main(int argc, char const *argv[]) {
    // int 자료형에서 CTestData 형식으로 변환될 수 있다.
    TestFunc(5);

    return 0;
}
