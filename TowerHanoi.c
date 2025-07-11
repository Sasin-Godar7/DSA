#include <stdio.h>

// Function declaration (IMPORTANT!)
void towerOfHanoi(int n, char from, char to, char aux);

int main()
{
    int n;
    printf("How many disks? ");
    scanf("%d", &n);

    printf("\nSteps to move %d disks:\n", n);
    towerOfHanoi(n, 'A', 'C', 'B');  // A = source, C = destination, B = auxiliary

    return 0;
}

// Function definition
void towerOfHanoi(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }

    // Step 1: Move n-1 disks from source to auxiliary
    towerOfHanoi(n - 1, from, aux, to);

    // Step 2: Move nth disk from source to destination
    printf("Move disk %d from %c to %c\n", n, from, to);

    // Step 3: Move n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, aux, to, from);
}
