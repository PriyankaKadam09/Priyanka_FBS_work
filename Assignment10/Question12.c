#include <stdio.h>

int toLower(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        return ch + ('a' - 'A');
    return ch;
}
int mystrcasecmp(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        if (toLower(*str1) != toLower(*str2))
            return toLower(*str1) - toLower(*str2);
        str1++;
        str2++;
    }
    return toLower(*str1) - toLower(*str2);
}
int main() {
    char str1[] = "HELLO";
    char str2[] = "priya";
    int result = mystrcasecmp(str1, str2);
    if (result == 0)
        printf("Strings are equal \n");
    else
        printf("Strings are different\n");
	  return 0;
}