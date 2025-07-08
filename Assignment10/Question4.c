#include <stdio.h>

void mystrcat(char *dest, const char *src) {
    while (*dest) {
        dest++;
    }
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';  
}
int main() {
    char str1[] = "Good ";
    char str2[] = "day";

    mystrcat(str1, str2);
    printf("Concatenated String: %s\n", str1);

    return 0;
}