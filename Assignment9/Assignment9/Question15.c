#include <stdio.h>
#include <string.h>

void strrev(char *str) {
    int i, j;
    char temp;
    int len = strlen(str);

    for(i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[] = "priyanka";
    strrev(str);
    printf("Reversed string: %s\n", str);
    
    return 0;
}
