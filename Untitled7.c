#include <stdio.h>

int main() {
    int num, digit, reverse = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for(; num != 0; num /= 10) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
    }
    
    printf("Reverse of %d = %d", num, reverse);
    
    return 0;
}

