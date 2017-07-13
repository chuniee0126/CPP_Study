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

// 제작자 코드
class CTest {
public:
    CTest() {
        std::cout << "CTest::CTest()" << std::endl;
    }

    ~CTest() {
        std::cout << "CTest::~CTest()" << std::endl;
    }
};

int main(int argc, char const *argv[]) {
    std::cout << "Begin" << std::endl;

    // new 연산자를 이용해 동적으로 객체를 생성한다.
    CTest *pData = new CTest[3];

    // 배열을 배열로 삭제하지 않으면 메모리 릭 버스를 만든다.
    delete pData;
    std::cout << "End" << std::endl;

    return 0;
}
