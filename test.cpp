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
#include <cstdio>
#include <iostream>

class CTest {

public:
    // CTest 클래스의 '생성자 함수' 선언 및 정의
    CTest()
    {
        //인스턴스가 생성되면 멤버 데이터를 자동으로 초기화
        std::cout << "CTest() : 생성자 함수" << '\n';
        m_nData = 10;
    }


    int m_nData;

    // 멤버 함수 선언(선언을 clss안에서, 정의를 밖에서 진행)
    void PrintData(void);

};

// 멤버 함수를 정의한다. 이 때 이 멤버함수의 소속을 명확히 구분해둔다.
void CTest::PrintData(void){
    // 멤버 데이터에 접근하고 값을 출력한다.
    std::cout << m_nData << std::endl;
}

int main(int argc, char const *argv[])
{
    std::cout << "main() 함수 시작" << std::endl;

    CTest t;
    t.PrintData();

    std::cout << "main() : 함수 끝" << std::endl;

    return 0;
}
