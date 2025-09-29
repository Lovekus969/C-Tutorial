#include <stdio.h>

// Function definition
int add(int a, int b) {
    return a + b;   // returns sum
}

int main() {
    int result = add(5, 7);  // calling function
    printf("Sum = %d\n", result);
    return 0;
}
