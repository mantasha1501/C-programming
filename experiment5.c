#include <stdio.h>

/* 
Name : Mantasha Shaikh
UIN : 251P065
Roll no : 55
Branch : COMPS
*/

int factorial_1(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int factorial_2(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial_2(num - 1);
    }
}

int main() {
    int a = 5;

    printf("Factorial of %d (Iterative) is : %d\n", a, factorial_1(a));
    printf("Factorial of %d (Recursive) is : %d\n", a, factorial_2(a));

    return 0;
}
