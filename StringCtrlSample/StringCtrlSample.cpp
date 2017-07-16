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
    CMyString strData, strTest;

    strData.SetString("Hello");
    strTest.SetString("World");

    // 복사 생성
    CMyString strNewData(strData);
    std::cout << strNewData.GetString() << '\n';

    // 단순 대입 연산자 호출
    strNewData = strTest;
    std::cout << strNewData.GetString() << std::endl;

    return 0;
}
