#include <stdio.h>

void mystrncpy(char *dest, const char *src, int n) {
    int i;
    for(i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for(; i < n; i++) {
        dest[i] = '\0';  
    }
}
int main() {
    char src[] = "Computer";
    char dest[20];

    mystrncpy(dest, src, 4);
    dest[4] = '\0';  
    printf("Copied first 4 characters: %s\n", dest);
    return 0;
}
