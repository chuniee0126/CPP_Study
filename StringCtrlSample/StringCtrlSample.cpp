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

CMyString TestFunc(void) {
    CMyString strTest("TestFunc() return ");

    std::cout << strTest << '\n';

    return std::move(strTest);
}

int main(int argc, char const *argv[]) {
    // 이름없는 임시객체가 만들어진다.
    TestFunc();

    return 0;
}
