#include <stdio.h>

void mystrlower(char *str) {
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + ('a' - 'A');  
        }
        str++;
    }
}

int main() {
    char str[] = "WELCOME To C";
    mystrlower(str);
    printf("Lowercase String: %s\n", str);
    return 0;
}