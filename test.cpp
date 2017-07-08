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
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

#define ADD(a, b)((a) + (b))

int Add(int a, int b){
    return a + b;
}

// 일반 함수와 매크로의 장점만 안 군데 모아놓은 것
inline int AddNew(int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[]) {
    int a, b;

    cout << "input a: ";
    cin >> a;

    cout << "input b: ";
    cin >> b;

    cout << ADD(a, b) << endl;
    cout << Add(a, b) << endl;
    cout << AddNew(a, b) << endl;

    return 0;
}
