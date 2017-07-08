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
T  Add(T a, T b){
    return a + b;
}

int main(int argc, char const *argv[]) {
    cout << "Add(int, int): " << Add(3, 4) << endl;
    cout << "Add(double, double): " << Add(3.3, 4.4) << endl;

    return 0;
}
