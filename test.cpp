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

//가급적이면 함수 다중정의 보다는 '함수 템플릿'을 사용하기를 권한다.
//사용자에게 있어 편의성을 높이며, 코드의 효율성 또한 높인다.
template <typename T>
T TestFunc(T a){
    cout << "매개변수 a: " << a << endl;

    return a;
}

int main(int argc, char const *argv[]) {
    cout << "int\t" << TestFunc(3) << endl;
    cout << "double\t" << TestFunc(3.3) << endl;
    cout << "char\t" << TestFunc('A') << endl;
    cout << "char*\t" << TestFunc("TestString") << endl;

    return 0;
}
