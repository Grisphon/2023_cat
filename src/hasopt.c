#include "stucat.h"

int hasopt(const char *str, char subject)
{
    int count;

    count = 0;
    while (str[count] != '\0') {
        if (str[count] == subject)
            return 1;
        else
            count = count + 1;
    }
    return 0;
}
