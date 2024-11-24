#include <stdio.h>
#include <ctype.h>
#include "heap.h"

int wordToNumber(const char *word) {
    int i;
    int sum = 0;
    for (i = 0; i < 3; i++) {
        char c = toupper(word[i]);
        if (isalpha(c)) { // letter checker
            sum += c - 'A' + 1;
        }
    }
    return sum;
}

