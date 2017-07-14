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

CMyString::CMyString() : m_pszData(NULL), m_nLength(0) {}

CMyString::~CMyString() {}

int CMyString::SetString(const char *pszParam) {
    m_pszData = pszParam;
    return 0;
}

const char * CMyString::GetString() {
    return NULL;
}

void CMyString::Release() {}
