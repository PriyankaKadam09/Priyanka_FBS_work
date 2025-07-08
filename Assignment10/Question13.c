#include <stdio.h>

char* mystrnstr(const char *mainStr, const char *subStr, int n) {
    int i, j;

    for (i = 0; i <= n; i++) {
        for (j = 0; subStr[j] != '\0'; j++) {
            if (i + j >= n || mainStr[i + j] != subStr[j])
                break;
        }
        if (subStr[j] == '\0')
            return (char*)&mainStr[i];  
        if (mainStr[i] == '\0')
            break;  
    }
    return NULL;  
}
int main() {
    char str[] = " engineering";
    char sub[] = " aarohi engineering";

    char *result = mystrnstr(str, sub, 10);
    if (result)
        printf("Substring found: %s\n", result);
    else
        printf("Substring not found in first 15 characters\n");

    return 0;
}