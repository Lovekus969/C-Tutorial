#include <stdio.h>

// Function definition
int getNumber() {
    return 42;  // just returns a number
}

int main() {
    int num = getNumber();   // calling function
    printf("Number = %d\n", num);
    return 0;
}
