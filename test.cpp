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
    int m_nData;

public:
    CMyData() : m_nData(0) {};

    int GetData(void) {
        return m_nData;
    }

    void SetData(int dParam) {
        m_nData = dParam;
    }

    // 매개변수가 double 자료형인 경우로 다중 정의했다.
    void SetData(double dParam) = delete;
};

int      main(int argc, char const *argv[]) {
    CMyData a;

    // CMyData::SetData(int) 메서드가 호출된다.
    a.SetData(10);
    std::cout << a.GetData() << std::endl;

    CMyData b;

    b.SetData(5.5);
    std::cout << b.GetData() << std::endl;

    return 0;
}
