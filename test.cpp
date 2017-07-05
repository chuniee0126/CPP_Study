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

    int nData = 10;

    // nData 변수에 대한 참조자(별명) 선언
    int &ref = nData;

    // 참조자의 값을 변경하면 원본도 변경된다.
    ref = 20;
    cout << nData << endl;

    // 포인터를 쓰는 것과 비슷하다.
    int *pnData = &nData;
    *pnData = 30;
    cout << nData << endl;

    return 0;
}
