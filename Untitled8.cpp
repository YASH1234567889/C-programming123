#include <stdio.h>

int main() {
    int decimal, binary[32], i = 0;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    while(decimal != 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    
    printf("Binary number: ");
    for(i--; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    
    return 0;
}

