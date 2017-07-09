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

class USERDATA {

public:
    // 멤버 변수 선언
    int nAge;
    char szName[32];

    // 멤버 함수 선언 및 정의
    void Print(void) {
        // nAge와 szName은 Print()함수의 지역 변수가 아니다!
        printf("%d, %s\n",nAge, szName );
    }
};

int main(int argc, char const *argv[])
{
    USERDATA user = { 10, "철수" };
    user.Print();
    
    return 0;
}
