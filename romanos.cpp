#include "romanos.hpp"
#include <cstring>

int romanos_para_decimal(char const * num_romano)
{
    if (strcmp(num_romano, "I") == 0) {
        return 1;
    }

    return 0;
}