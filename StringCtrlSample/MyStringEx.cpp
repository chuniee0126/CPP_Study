#include <string.h>
#include "MyStringEx.h"

int CMyStringEx::Find(const char *pszParam) {
    // pszParam이 존재하는 주소 반환
    const char *str = strstr(GetString(), pszParam);

    // 반환된 주소를 사용해서 인덱스를 반환
    int result = (str - GetString()) / sizeof(char);

    return result;
}
