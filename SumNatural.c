#include <stdio.h>

int sum(int n); // Function prototype

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = sum(num);
    printf("Sum of first %d natural numbers is: %d\n", num, result);

    return 0;
}

int sum(int n) {
    if (n == 1) {
        return 1;  // Base case
    } else {
        return n + sum(n - 1);  // Recursive case
    }
}
