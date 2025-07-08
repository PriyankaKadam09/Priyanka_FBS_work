#include <stdio.h>

void mystrncat(char *dest, const char *src, int n) {
    
    while (*dest)
        dest++;

    int i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        *dest = src[i];
        dest++;
    }
    *dest = '\0';  
}

int main() {
    char str1[100] = "Data";
    char str2[] = "Science";

    mystrncat(str1, str2, 3);  
    printf("Concatenated string: %s\n", str1);

    return 0;
}