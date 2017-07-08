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

void TestFunc(int a)
{
    cout << "TestFunc(int)" << endl;
}

void TestFunc(int a, int b = 10)
{
    cout << "TestFunc(int, int)" << endl;
}

int main(int argc, char* argv[]){
    //TestFunc(5);
    //위 라인의 주석처리를 삭제하면 오류가 발생한다. 중요한건 위 다중정의를 사용한 함수 자체의 정의에서는 오류가 발생하지 않는다는 것이다.
    cout << "compile complete!" << endl;

    return 0;
}
