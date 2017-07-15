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

void TestFunc(int nParam) {
    std::cout << nParam << std::endl;
}

int main(int argc, char const *argv[]) {
    TestFunc(10);
    TestFunc(5.5);
    return 0;
}
