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

class CTest {
private:
    // 포인터 멤버 데이터
    int *m_pnData = nullptr;

public:
    CTest(int nParam) {
        m_pnData  = new int;
        *m_pnData = nParam;
    }

    ~CTest() {
        // 문법적인 오류는 없지만 컴파일 해보게 되면 문제가 있음을 알 수 있다.
        Release();
    }

    int GetData() {
        if (m_pnData != NULL) return *m_pnData;
        return 0;
    }

    void Release() {
        if (m_pnData != NULL) delete m_pnData;
    }
};

//
int main(int argc, char const *argv[]) {
    CTest a(10);
    // 얕은 복사로 인해 같은 포인터를 가진 친구가 멤버 변수로 들어가게 된다. 이는 메모리를 해제하는 과정에서 문제가 발생한다.
    CTest b(a);

    std::cout << a.GetData() << '\n';
    std::cout << b.GetData() << std::endl;

    return 0;
}
