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

void TestFunc(const CMyString& strParam) {
    std::cout << strParam << '\n';
}

int main(int argc, char const *argv[]) {
    CMyString strData;

    strData.SetString("Hello");

    ::TestFunc(strData);
    ::TestFunc(CMyString("World"));

    return 0;
}
