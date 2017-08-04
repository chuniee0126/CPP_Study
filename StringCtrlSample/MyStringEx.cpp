#include "MyStringEx.h"

int CMyStringEx::Find(const char *pszParam) {
    // pszParam이 존재하는 주소 반환
    const char *str = strstr(GetString(), pszParam);

    // 반환된 주소를 사용해서 인덱스를 반환
    int result = (str - GetString()) / sizeof(char);

    return result;
}

void CMyStringEx::SetString(const char *pszParam){

    const char * str = strstr(pszParam, "멍멍이아들");

    if (str != NULL) CMyString::SetString("착한 사람");
    else CMyString::SetString(pszParam);

    return;
}
