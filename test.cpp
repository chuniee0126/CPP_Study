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

// 제작자 - 초기 개발자
class CMyData {
private:

    int m_nData = 0;

public:

    CMyData() {}

    virtual ~CMyData() {}

    int GetData() {
        return m_nData;
    }

    void SetData(int nParam) {
        m_nData = nParam;
    }

protected:

    void PrintData() {
        // 파생 클래스만 접근 가능
        std::cout << "CMyData::PrintData()" << '\n';
    }
};

// 제작자 - 후기 개발자
class CMyDataEX : public CMyData {
private:

    /* data */

public:

    CMyDataEX() {}

    virtual ~CMyDataEX() {}

    void TestFunc() {
        //  기본 형식 멤버에 접근
        PrintData();
        SetData(5);
        std::cout << CMyData::GetData() << '\n';
    }

    // Override
    void SetData(int nParam) {
        if (nParam < 0) CMyData::SetData(0);

        if (nParam > 10) CMyData::SetData(10);
    }
};


// 사용자
int main(int argc, char const *argv[]) {
    // 구형에는 값을 보정하는 기능이 없다.
    CMyDataEX a;
    // a; 실제 형식
    // rData; 참조 형식
    CMyData & rData = a;

    // 참조 형식인 CMyData의 SetData()가 호출된다. !!!
    rData.SetData(15);
    std::cout << rData.GetData() << '\n';

    return 0;
}
