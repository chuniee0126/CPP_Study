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
	void (*Print)(struct USERDATA *);
	// C문법에 충실하게 되면 함수를 구조체 안에 넣을 수는 없지만 19번 행처럼 객체를 초기화할 때 출력을 담당하는 함수의 주소를 기술하고 38번 행의 형태로 사용하는 것이 가능하다.
} USERDATA;

void PrintData(USERDATA *pUSER)
{
	printf("%d, %s\n", pUSER->nAge, pUSER->szName );
}

// 사용자의 코드
int main(int argc, char const *argv[]) {
	//test
	USERDATA user = {20, "철수", PrintData};
	// printf("%d, %s\n", User.nAge, User.szName ); // 만약 PrintData를 선언하지 않았었다면 사용자는 이 줄을 추가했어야 했을 것이다.
	//PrintData(&user);
	user.Print(&user);
	return 0;
}
