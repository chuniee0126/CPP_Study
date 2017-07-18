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

CMyString::CMyString() : m_pszData(NULL), m_nLength(0) {}

CMyString::CMyString(const CMyString& rhs) : m_pszData(NULL), m_nLength(0) {
    this->SetString(rhs.GetString());
}

CMyString::CMyString(const char *pszParam) {
    SetString(pszParam);
}

CMyString::CMyString(CMyString&& rhs) : m_pszData(NULL), m_nLength(0) {
    std::cout << "CMyString 이동 생성자 호출" << '\n';
    // 얕은 복사를 수행해도 상관없다. 어차피 원본이 곧 소멸되기 때문이다!
    m_pszData = rhs.m_pszData;
    m_nLength = rhs.m_nLength;

    // 원본 임시 객체의 멤버들은 초기화한다. 절대로 해제하면 안 된다.
    rhs.m_pszData = NULL;
    rhs.m_nLength = 0;
}

CMyString::~CMyString() {
    // 동적 할당 되었던 메모리 할당 취소
    Release();
}

CMyString& CMyString::operator=(const CMyString& rhs) {
    if (this != &rhs) this->SetString(rhs.GetString());
    return *this;
}

CMyString CMyString::operator+(const CMyString& rhs) {
    CMyString result;

    result.SetString(this->GetString());
    result.Append(rhs.GetString());
    return std::move(result);
}

CMyString& CMyString::operator+=(const CMyString& rhs) {
    this->Append(rhs.GetString());

    return *this;
}

CMyString::operator char *(void) const {
    return m_pszData;
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

const char * CMyString::GetString() const {
    return m_pszData;
}

int CMyString::GetLength() const {
    return m_nLength;
}

int CMyString::Append(const char *pszParam) {
    // 매개변수 유효성 검사
    if (pszParam == NULL) return 0;

    int nLenParam = strlen(pszParam);

    if (nLenParam == 0) return 0;

    // 세트된 문자열이 없다면 새로 문자열을 할당한 것과 동일하게 처리함
    if (m_pszData == NULL) {
        SetString(pszParam);

        return m_nLength;
    }

    // 현재 문자열의 길이 백업
    int nLenCur = m_nLength;

    // 두 문자열을 합쳐서 저장할 수 있는 메모리를 새로 할당함
    char *pszResult = new char[nLenCur + nLenParam + 1];

    // 문자열 조합
    strcpy(pszResult,                            m_pszData);
    strcpy(pszResult + (sizeof(char) * nLenCur), pszParam);

    Release();
    m_pszData = pszResult;
    m_nLength = nLenCur + nLenParam;

    return m_nLength;
}

void CMyString::Release() {
    if (m_pszData != NULL) delete[] m_pszData;

    // 데이터 값 초기화
    m_pszData = NULL;
    m_nLength = 0;
}
