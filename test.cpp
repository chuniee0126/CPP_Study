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
    // CMyData() {}; // 이 코드도 private가 되기 때문에 사실상 객체의 생성 과정에서 컴파일 오류를 내보낸다. 나중에는 객체의 생성을 통제하기 위해 사용하기도 한다.

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

    std::cout << data.GetData() << std::endl;
    return 0;
}
