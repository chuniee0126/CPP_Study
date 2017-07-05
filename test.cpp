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

void TestFunc(int &rParam) {
    rParam = 100;
}


int main(int argc, char* argv[]){
    int nData = 0;

    TestFunc(nData);
    cout << nData << endl;

    return 0;
}
