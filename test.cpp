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

int nData = 200;

namespace Test {
    //Test 네임스페이스 소속
    void TestFunc(void){ cout << nData << endl; }

    int nData = 100;
} /*Test*/

// 위에서 nData에 대한 선언이 이루어지지 않고 그 행이 이 장소에 오게 되면 순서대로 선언이 이루어질 때, nData가 선언되어 있지 않아 컴파일 오류가 일어난다.
// int nData = 200;

int main(int argc, char const *argv[])
{
    Test::TestFunc();

    return 0;
}
