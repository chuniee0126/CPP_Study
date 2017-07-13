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
class CTest {
public:
    // 이렇게 하면 별도로 정의를 기술하지 않고도 선언과 정의가 분리
    // 이런 형태의 문법은 템플릿을 이용해 프로그래밍할 때 필요해진다.
    CTest(void) = default;
    int m_nData = 5;
};

int main(int argc, char const *argv[]) {
    CTest a;

    std::cout << a.m_nData << std::endl;

    return 0;
}
