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


int TestFunc(int nParam = 10)
{
    return nParam;
}

int main(int argc, char* argv[]){
    cout << TestFunc() << endl;

    cout << TestFunc(20) << endl;

    return 0;
}
