#include <stdio.h>

int isPrime(int n) {
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return n > 1;
}

int main() {
    int start, end;

    printf("Enter start number: ");
    scanf("%d", &start);

    printf("Enter end number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++)
        if (isPrime(i)) printf("%d ", i);

    return 0;
}

