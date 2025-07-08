#include <stdio.h>

int mystrncmp(const char *str1, const char *str2, int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (str1[i] != str2[i] || str1[i] == '\0' || str2[i] == '\0')
            return (unsigned char)str1[i] - (unsigned char)str2[i];
    }
    return 0;  
}
int main() {
    char str1[] = "Computer";
    char str2[] = "tata";

    int result = mystrncmp(str1, str2, 3);
    if (result == 0)
        printf("First 3 characters are equal\n");
    else
        printf("First 3 characters are different\n");

    return 0;
}