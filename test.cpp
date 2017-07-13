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
class CMyData {
    // 기본 접근 제어 지시자는 'private'이다.
    int m_nData;

public:
    int GetData(void) {
        return m_nData;
    }

    void SetData(int nParam) {
        m_nData = nParam;
    }
};

// 사용자 코드
int main(int argc, char const *argv[]) {
    CMyData data;

    data.SetData(10);
    std::cout << data.GetData() << std::endl;
    return 0;
}
