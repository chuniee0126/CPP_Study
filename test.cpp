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

void TestFunc(void){ cout << "::TestFunc()" << endl; }

namespace Test {
    //Test 네임스페이스 소속
    void TestFunc(void){ cout << "Test::TestFunc()" << endl; }
} /*Test*/

namespace MYDATA{
    //MYDATA 네임스페이스 소속
    void TestFunc(void){ cout << "MYDATA::TestFunc()" << endl; }
} /*MYDATA*/

int main(int argc, char const *argv[]) {
    TestFunc(); // 묵시적 전역
    ::TestFunc();// 명시적 전역
    Test::TestFunc();
    MYDATA::TestFunc();

    return 0;
}
