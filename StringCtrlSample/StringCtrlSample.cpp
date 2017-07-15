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

int main(int argc, char const *argv[]) {
    CMyString strData;

    strData.SetString("Hello");
    strData.SetString("World");
    std::cout << strData.GetString() << std::endl;
    strData.Release();

    return 0;
}
