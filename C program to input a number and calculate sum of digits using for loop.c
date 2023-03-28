#include <stdio.h>//C program to input a number and calculate sum of digits using for loop

int main() {
    int num, digit,temp, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for(temp = num; temp > 0; temp /= 10) {
        digit = temp % 10;
        sum += digit;
    }
    
    printf("Sum of digits: %d", sum);
    
    return 0;
}
