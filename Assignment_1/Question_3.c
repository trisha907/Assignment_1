#include<stdio.h>
void main() {	
	int	leap,year=2028;
	 
	 if(year%4==0 && year%100!=0 || year%400==0)
	 {
	 	printf("It's a Leap Year");
	 }
	 else 
	 {
	 	printf("It's not a leap year");
	 }
}