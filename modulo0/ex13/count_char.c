#include "count_char.h"

char get_ascii_char(int code) {
    return (char)code;
}

int count_char(char str[], int code) {
    char target = get_ascii_char(code);
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) count++;
    }
    return count;
}
