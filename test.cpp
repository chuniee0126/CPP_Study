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

    CMyData() {
        std::cout << "CMyData()" << '\n';
    }

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

    CMyDataEX() {
        std::cout << "CMyDataEX()" << '\n';
    }

    virtual ~CMyDataEX() {}

    void TestFunc() {
        //  기본 형식 멤버에 접근
        PrintData();
        SetData(5);
        std::cout << CMyData::GetData() << '\n';
    }
};


// 사용자
int main(int argc, char const *argv[]) {
    CMyDataEX data;

    // 기본 클래스(CMyData) 멤버에 접근
    data.SetData(10);
    std::cout << data.GetData() << '\n';

    // 파생클래스(CMyDataEX) 멤버에 접근
    data.TestFunc();

    return 0;
}
