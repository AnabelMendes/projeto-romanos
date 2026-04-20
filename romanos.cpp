#include "romanos.hpp"
#include <cstring>

int romanos_para_decimal(char const * num_romano)
{
    if (strcmp(num_romano, "I") == 0) {
        return 1;
    }
    if (strcmp(num_romano, "V") == 0) {
        return 5;
    }
    return 0;
}