#include "stucat.h"

int option(int argc, char **argv)
{
    int count;

    count = 0;
    while (count < argc) {
        if (argv[count][0] == '-' && argv[count][1] == 'h')
            return helper();
        count = count + 1;
    }
    return 0;
}
