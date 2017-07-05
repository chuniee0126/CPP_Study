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

void SWAP(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


int main(int argc, char* argv[]){
    int aData = 10;
    int bData = 20;

    SWAP(aData, bData);
    cout << aData << " is aData and "<< bData << " is bData" << "\n" << endl;

    return 0;
}
