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
 *       Compiler:  g++
 *
 *         Author:  Chun Myong Park,
 *   Organization:
 *
 * =====================================================================================
 */
#include <cstdio>
#include <iostream>

class CMyData {
private:

    /* data */

public:

    CMyData() {
        std::cout << "CMyData()" << '\n';
    }

    CMyData(int nParam) {
        std::cout << "CMyData(int)" << '\n';
    }

    CMyData(double dParam) {
        std::cout << "CMyData(double)" << '\n';
    }

    ~CMyData() {std::cout << "CmyData::~CMyData()" << '\n';}
};

class CMyDataEx : public CMyData {
private:

    /* data */

public:

    using CMyData::CMyData;
    ~CMyDataEx() {std::cout << "CmyDataEX::~CMyDataEx()" << '\n';}
};


int main(int argc, char const *argv[]) {
    CMyDataEx a;

    std::cout << "*****************" << '\n';

    CMyDataEx b(2);

    std::cout << "*****************" << '\n'; \

    CMyDataEx c(3.3);

    return 0;
}
