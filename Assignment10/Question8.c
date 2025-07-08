#include <stdio.h>

char* mystrstr(const char *mainStr, const char *subStr) {
    int i, j;
    for (i = 0; mainStr[i] != '\0'; i++) {
        for (j = 0; subStr[j] != '\0'; j++) {
            if (mainStr[i + j] != subStr[j])
                break;
        }
        if (subStr[j] == '\0')
            return (char*)&mainStr[i]; 
    }
    return NULL; 
}
int main() {
    char str[] = "priyanka ";
    char sub[] = "priya";

    char *result = mystrstr(str, sub);
    if (result)
        printf("Substring found at: %s\n", result);
    else
        printf("Substring not found\n");

    return 0;
}