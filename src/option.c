#include "stucat.h"

int option(int argc, char **argv)
{
    int count;
    int opt;

    opt = 0;
    count = 0;
    while (count < argc) {
        if (argv[count][0] == '-' && argv[count][1] == 'h')
            return helper();
        if (argv[count][0] == '-') {
            if (hasopt(argv[count], 'E') == 1) {
                opt = opt + 10;
            } else if (hasopt(argv[count], 'T') == 1) {
                opt = opt + 100;
            }
        }
        count = count + 1;
    }
    return opt;
}
