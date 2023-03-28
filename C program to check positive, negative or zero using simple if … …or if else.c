#include<stdio.h>//C program to check positive, negative or zero using simple if or if else
int main() {
	int num;
	printf("Enter a Number : ");
	scanf("%d",&num);
	if(num>0){
		printf("%d is a positive number",num);
	}
	else if(num < 0){
		printf("%d is a negative number",num);
	}
	else  {
		printf("%d is a zero",num);
	}
	return 0;
}
Footer
