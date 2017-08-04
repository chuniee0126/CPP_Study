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

    strTest.SetString("I am a boy.");
    std::cout << strTest << '\n';

    int nIndex = strTest.Find("am");
    std::cout << "Index: " << nIndex << '\n';

    return 0;
}
