#include <stdio.h>

/*
Name: Mantasha Shaikh
UIN: 251P065
Computer Engineering
Div: C
*/

int main() {
    int start, end, sum = 0;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Swap if start is greater than end
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    // Calculate sum of odd numbers between start and end
    for (int i = start + 1; i < end; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    printf("Sum of odd numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}
