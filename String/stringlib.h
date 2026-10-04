#ifndef MY_STRING_H
#define MY_STRING_H

#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// String Data Type
typedef char* String;

//String Length
static int Length(String text)
{
    return strlen(text);
}

//String Equals
static int Equals(String text1, String text2)
{
    return strcmp(text1, text2) == 0;
}

//Contains
static int Contains(String text, String value)
{
    return strstr(text, value) != NULL;
}

//String StartsWith
static int StartsWith(String text, String value)
{
    return strncmp(text, value, strlen(value)) == 0;
}

//String EndsWith
static int EndsWith(String text, String value)
{
    int textLength = strlen(text);
    int valueLength = strlen(value);

    if (valueLength > textLength)
    {
        return 0;
    }

    return strcmp(
        text + textLength - valueLength,
        value
    ) == 0;
}

#endif
