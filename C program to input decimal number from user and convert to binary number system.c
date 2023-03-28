#include <stdio.h>//C program to input decimal number from user and convert to binary number system

int main() {
    int decimal, binary = 0, base = 1, remainder;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    while(decimal > 0) {
        remainder = decimal % 2;
        binary += remainder * base;
        decimal /= 2;
        base *= 10;
    }
    
    printf("Binary number: %d", binary);
    
    return 0;
}
