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
    for (int i = 0; num_romano[i] != '\0'; i++) {
        if ((num_romano[i] == 'V' || num_romano[i] == 'L' || num_romano[i] == 'D')
            && num_romano[i] == num_romano[i + 1]) {
            return -1;
            }
    }
    int repeticoes = 1;
    for (int i = 1; num_romano[i] != '\0'; i++) {
        if (num_romano[i] == num_romano[i - 1]) {
            repeticoes++;
            if (repeticoes > 3) {
                return -1;
            }
        } else {
            repeticoes = 1;
        }
    }
    int total = 0;
    for (int i = 0; num_romano[i] != '\0'; i++) {
        int atual = valor_romano(num_romano[i]);
        int proximo = valor_romano(num_romano[i + 1]);
        if (proximo > atual) {
            total -= atual;
        } else {
            total += atual;
        }
    }
    return total;
}