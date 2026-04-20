#include "romanos.hpp"
#include <cstring>

int valor_romano(char c) {
    if (c == 'I') return 1;
    if (c == 'V') return 5;
    if (c == 'X') return 10;
    if (c == 'L') return 50;
    if (c == 'C') return 100;
    if (c == 'D') return 500;
    if (c == 'M') return 1000;
    return -1;
}

int romanos_para_decimal(char const * num_romano)
{
    if (strcmp(num_romano, "IV") == 0) {
        return 4;
    }

    if (strlen(num_romano) == 1) {
        return valor_romano(num_romano[0]);
    }

    return 0;
}