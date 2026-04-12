#include "stdafx.h"
#include "StringConversion.h"
#include <cstdlib>
//#include <atlbase.h>
//#include <atlconv.h>

const char* StringConversion::ToASCII(const wchar_t* str, char* buf, size_t bufsize)
{
    size_t charsConverted = 0;
    wcstombs_s(&charsConverted, buf, bufsize, str, _TRUNCATE);
    return buf;
}

const wchar_t* StringConversion::ToUTF16(const char* str, wchar_t* buf, size_t bufsize)
{
    size_t charsConverted = 0;
    mbstowcs_s(&charsConverted, buf, bufsize, str, _TRUNCATE);
    return buf;
}
