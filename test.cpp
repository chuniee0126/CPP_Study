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

int TestFunc(int nParam) {
    int nResult = nParam * 2;

    return nResult;
}


int main(int argc, char* argv[]){
    int nInput = 0;
    cout << "Input number: ";
    cin >> nInput;

    // 산술 연산으로 만들어진 임시 객체에 대한 r-value 참조
    int &&rdata = nInput + 5;
    cout << rdata << endl;

    //함수 반환으로 만들어진 임시 객체에 대한 r-value 참조
    int &&result = TestFunc(10);

    //값을 변경할 수 있다.
    result += 10;
    cout << result << endl;

    return 0;
}
