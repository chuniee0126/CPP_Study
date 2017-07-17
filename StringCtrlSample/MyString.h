/*
 * =====================================================================================
 *
 *       Filename:  MyString.h
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2017년 07월 13일 22시 32분 28초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#ifndef __MyString__
#define __MyString__    1

#include <iostream>
#include <cstring>

class CMyString {
private:
    // 문자열을 저장하기 위해 동적 할당한 메모리를 가리키는 포인터
    char *m_pszData = NULL;

    // 저장된 문자열의 길이
    int m_nLength = 0;

public:
    CMyString();
    CMyString(const CMyString& rhs);  // 복사 생성자
    explicit CMyString(const char *pszParam);  // 변환 생성자
    CMyString(CMyString&& rhs);  // 이동 생성자
    ~CMyString();

    CMyString & operator=(const CMyString& rhs);
    operator char *(void) const;

    int         SetString(const char *pszParam);
    const char* GetString() const;
    void        Release();
};


#endif  /* end of include guard: __MyString__ */
