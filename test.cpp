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

int Add(int a, int b, int c)
{
    cout << "Add(int, int, int): ";
    return a + b + c;
}

int Add(int a, int b)
{
    cout << "Add(int, int): ";
    return a + b;
}

double Add(double a, double b)
{
    cout << "Add(double, double): ";
    return a + b;
}

int main(int argc, char* argv[]){

    cout << Add(3, 4) << endl;
    cout << Add(3, 4, 5) << endl;
    cout << Add(3.3, 4.4) << endl;

    return 0;
}
