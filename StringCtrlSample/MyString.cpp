/*
 * =====================================================================================
 *
 *       Filename:  MyString.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2017년 07월 13일 22시 32분 54초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include "MyString.h"
#include <iostream>
#include <cstring>

CMyString::CMyString() : m_pszData(NULL), m_nLength(0) {}

CMyString::~CMyString() {
    // 동적 할당 되었던 메모리 할당 취소
    Release();
}

int CMyString::SetString(const char *pszParam) {
    // 기존에 동적 할당 되어 있을 경우 고려
    Release();
    m_nLength = strlen(pszParam);

    if (m_nLength == 0) return 0;

    m_pszData = new char[m_nLength + 1];
    strcpy(m_pszData, pszParam);

    return 0;
}

const char * CMyString::GetString() {
    return m_pszData;
}

void CMyString::Release() {
    if (m_pszData != NULL) delete[] m_pszData;

    // 데이터 값 초기화
    m_pszData = NULL;
    m_nLength = 0;
}
