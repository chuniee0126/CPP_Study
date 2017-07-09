/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2017년 07월 08일 22시 16분 28초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdio.h>

// 제작자의 코드
typedef struct USERDATA
{
    int nAge;
    char szName[32];
} USERDATA;

void PrintData(USERDATA *pUSER)
{
    printf("%d, %s\n", pUser->nAge, pUser->szName );
}

// 사용자의 코드
int int main(int argc, char const *argv[]) {
    USERDATA user = {20, "철수"};
    // printf("%d, %s\n", User.nAge, User.szName ); // 만약 PrintData를 선언하지 않았었다면 사용자는 이 줄을 추가했어야 했을 것이다.
    PrintData(&user);

    return 0;
}
