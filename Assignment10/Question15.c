#include <stdio.h>

int toLowerChar(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        return ch + ('a' - 'A');
    return ch;
}
int mystrncasecmp(const char *str1, const char *str2, int n) {
    int i;
    for (i = 0; i < n; i++) {
        char c1 = toLowerChar(str1[i]);
        char c2 = toLowerChar(str2[i]);

        if (c1 != c2)
            return c1 - c2;

        if (c1 == '\0')  
            break;
    }
    return 0;  
}
int main() {
    char str1[] = "Coding";
    char str2[] = "codex";

    int result = mystrncasecmp(str1, str2, 3);
    if (result == 0)
        printf("First 3 characters are equal (case-insensitive)\n");
    else
        printf("First 3 characters are different\n");

    return 0;
}