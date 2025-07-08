#include <stdio.h>

char* mystrrchr(const char *str, char ch) {
    const char *last = NULL;
    while (*str) {
        if (*str == ch)
            last = str;  
        str++;
    }
    return (char*)last;  
}
int main() {
    char str[] = "character search";
    char ch = 't';

    char *ptr = mystrrchr(str, ch);
    if (ptr)
        printf("Last occurrence of '%c' is at position: %ld\n", ch, ptr - str);
    else
        printf("Character '%c' not found\n", ch);
    return 0;
}