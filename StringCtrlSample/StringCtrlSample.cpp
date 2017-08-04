/*
 * =====================================================================================
 *
 *       Filename:  StringCtrlSample.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2017년 07월 13일 22시 33분 22초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>
#include "MyString.h"
#include "MyStringEx.h"

int main(int argc, char const *argv[]) {
    CMyStringEx strTest;

    // 문자열이 필터링되어 대체되는 경우
    strTest.SetString("멍멍이아들");
    std::cout << strTest << '\n';

    // 필터링되지 않는 경우
    strTest.SetString("Hello");
    std::cout << strTest << '\n';

    return 0;
}
