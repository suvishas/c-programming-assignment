#include <stdio.h>//C program to input a character from user and check whether the given character is alphabet or not using if else

int main() {
    char i;
    printf("Enter a character: ");
    scanf("%c", &i);
    
	if((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')) {
        printf("%c is an alphabet.", i);
    }
    else {
        printf("%c is not an alphabet.", i);
    }
    
    return 0;
}
