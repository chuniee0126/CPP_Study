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

void TestFunc(const int& nParam) {
    // 상수형 참조였으나 일반 참조로 형변환했다.
    int& nNewParam = const_cast<int&>(nParam);

    // 따라서 l-value가 될 수 있다.
    nNewParam = 20;
}

int main(int argc, char const *argv[]) {
    int nData = 10;

    // 상수형 참조로 전달하지만 값이 변경된다.
    TestFunc(nData);

    std::cout << nData << std::endl;

    return 0;
}
