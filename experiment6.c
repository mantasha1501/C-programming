#include <stdio.h>

/*mantasha shaikh
UIN : 251P065
roll no : 55
branch : comps */

void counter() {
    static int count = 0;
    count++;
    printf("number of time function is called %d \n", count);
}

int main() {
    counter();
    counter();
    counter();

    return 0;
}
