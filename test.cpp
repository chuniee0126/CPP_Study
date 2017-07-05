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


int main(int argc, char* argv[]){
    int aList[5] = {10, 20, 30, 40, 50};

    // 전형적인 C 스타일 반복문
    for(int i = 0; i < 5; ++i)
        cout << aList[i] << ' ';

    cout << endl;

    // 범위 기반 C++11 스타일 반복문
    // 각 요소의 값을 n에 복사한다.
    for(auto n : aList){
        cout << n << ' ';
        n = 0;
    }

    cout << endl;

    // 값에 변화가 없을 것이다.(단순 복사)
    for(auto n : aList){
        cout << n << ' ';
    }

    cout << endl;

    // n은 각 요소에 대한 참조다.
    for(auto &n : aList){
        cout << n << ' ';
        n = 0;
    }

    cout << endl;

    // 값에 변화가 있을 것이다.(참조자 사용)
    for(auto n : aList){
        cout << n << ' ';
    }

    cout << endl;

    return 0;
}
