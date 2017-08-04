#include <string.h>
#include "MyString.h"

class CMyStringEx : public CMyString {
private:

    /* data */

public:

    CMyStringEx() {}

    CMyStringEx(const char *nParam) {
        SetString(nParam);
    }

    virtual ~CMyStringEx() {}

    int Find(const char *pszParam);
};
