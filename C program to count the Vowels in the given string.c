#include <stdio.h>//C program to count the Vowels in the given string
#include <string.h>

int main() {
    char str[100];
    int i, vowels = 0;
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    for(i = 0; i < strlen(str); i++) {
        if( str[i] == 'a' || 
			str[i] == 'e' || 
			str[i] == 'i' || 
			str[i] == 'o' || 
			str[i] == 'u' || 
			str[i] == 'A' || 
			str[i] == 'E' || 
			str[i] == 'I' || 
			str[i] == 'O' || 
			str[i] == 'U') {
            vowels++;
        }
    }
    
    printf("The number of vowels in the string is %d", vowels);
    
    return 0;
