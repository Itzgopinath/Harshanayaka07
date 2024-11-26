#include <stdio.h>

int main() {
    for(int i = 1; i <= 10; i++) {
        if(i == 6) {
            break;  // Exit the loop when i equals 6
        }
        printf("%d ", i);  // Prints 1 2 3 4 5
    }
    return 0;
}
