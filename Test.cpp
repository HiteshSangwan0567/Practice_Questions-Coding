#include<cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include<string.h>
void removeDuplicates(char *str)
{

    if (!str)
        return;
    int len = strlen(str);
    if (len < 2)
        return;
    bool hit[256];
    for(int i = 0; i < 256; ++i)
        hit[i] = false;

    hit[str[0]] = true;
    int tail = 1;
    for (int i = 1; i < len; ++i)
    {
        if (!hit[str[i]])
        {
            str[tail] = str[i];
            ++tail;
            hit[str[i]] = true;
        }
    }
    str[tail] = '\0';
}
