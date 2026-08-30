#include<stdio.h>
void main () {
	
	int num = 121;
	int reverse=0;
	int digit;
	int no1,q1,no2,no3;
	
	no1 = num % 10;
	
	q1 = num / 10;
	
	no2 = q1 % 10;
	
	no3 = q1 / 10;
	
	reverse = no1*100 + no2*10 + no3;
	
	if(reverse==num)
		printf("Number is pallindrome");
	else 
		printf("Number is not pallindrome");
}