#include <stdio.h>

int mystrlen(const char *str) {
    int length = 0;
    while(str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[] = "priyanka";
    int len = mystrlen(str);
    printf("Length of '%s' is: %d\n", str, len);
    return 0;
}