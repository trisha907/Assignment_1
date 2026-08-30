#include<stdio.h>
void main() {
	int basic_salary=8000,da,ta,hra;
	int total_salary;
	
	if(basic_salary<=5000)
	{
		da = basic_salary*10/100;
		printf("%d\n",da);
		
		ta = basic_salary*20/100;
		printf("%d\n",ta);
		
		hra = basic_salary*25/100;
		printf("%d\n",hra);
	}
	else 
	{
		da = basic_salary*15/100;
		printf("%d\n",da);
		
		ta = basic_salary*25/100;
		printf("%d\n",ta);
		
		hra = basic_salary*30/100;
		printf("%d\n",hra);
	}

}