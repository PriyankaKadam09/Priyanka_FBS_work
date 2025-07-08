#include <stdio.h>

void mystrupper(char *str) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - ('a' - 'A');  
        }
        str++;
    }
}

int main() {
    char str[] = "father";
    mystrupper(str);
    printf("Uppercase String: %s\n", str);
    return 0;
}