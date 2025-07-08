#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    char dest[20];

    printf("Enter string:\n");
    scanf("%s", str);        
    strcpy(dest, str);       

    printf("Copied string: %s\n", dest);

    return 0;
}
