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

// 디폴트 매개변수는 오른쪽에서 시작하며, 한번 디폴트 매개변수 선언이 시작되면, 그 다음 부터는 전부 디폴트 매개변수 선언이 이루어져야 한다.

// int TestFunc(int nParam1, int nParam2 = 2, nParam3 = NewParam)
// 추후에 코드를 수정할 일이 생길 경우에, 이런식으로  Defalt 매개변수를 사용하게 되면 유지보수에 좋은 영향을 미치게 된다.
//같은 API로 움직인다고 가정하여보게 되면, 이전에 쓰인 코드와 나중에 쓰인 코드 모두 정상적으로 동작한다.
// TestFunc(10, 5), TestFunc(10, 3, Newinput)모두 정상적으로 동작
int TestFunc(int nParam1, int nParam2 = 2)
{
    return nParam1 * nParam2;
}

int main(int argc, char* argv[]){
    cout << TestFunc() << endl;

    cout << TestFunc(10, 5) << endl;

    return 0;
}
