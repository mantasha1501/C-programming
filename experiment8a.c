#include <stdio.h>
/* mantasha shaikh
uin:251P065
roll no:55
comps*/
int main() {
    char str[100];
    
    int length = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string is: %d characters\n", length);

    return 0;
}
