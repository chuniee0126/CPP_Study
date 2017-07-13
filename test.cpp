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
public:
    // CTest 클래스의 '생성자 함수' 선언 및 정의
    CTest() {}

    // C++11부터 선언과 동시에 멤버 변수를 초기화할 수 있다!
    int m_nData2 = 20;
    int m_nData1 = 10;

    // 멤버 함수 선언(선언을 clss안에서, 정의를 밖에서 진행)
    void PrintData(void);
};

// 멤버 함수를 정의한다. 이 때 이 멤버함수의 소속을 명확히 구분해둔다.
void CTest::PrintData(void) {
    // 멤버 데이터에 접근하고 값을 출력한다.
    std::cout << m_nData1 << std::endl;
    std::cout << m_nData2 << std::endl;
}

int main(int argc, char const *argv[]) {
    std::cout << "main() 함수 시작" << std::endl;

    CTest t;
    t.PrintData();

    std::cout << "main() : 함수 끝" << std::endl;

    return 0;
}
