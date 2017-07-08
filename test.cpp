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

// 디폴트 매개변수는 오른쪽에서 시작하며, 한번 디폴트 매개변수 선언이 시작되면, 그 다음 부터는 전부 디폴트 매개변수 선언이 이루어져야 한다.
int TestFunc(int nParam1, int nParam2 = 2)
{
    return nParam1 * nParam2;
}

int main(int argc, char* argv[]){
    cout << TestFunc(10) << endl;

    cout << TestFunc(10, 5) << endl;

    return 0;
}
