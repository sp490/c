#include<stdio.h>
void main () {
	float salary;
	printf("Enter your salary = ");
	scanf("%f",&salary);

	if(salary >= 0 && salary <= 500000){
		printf("\nsalary amount %f comes under zero percent tax slab\n",salary);
	}
       
	if(salary >= 500001 && salary <= 1000000){
		printf("\nsalary amount %f comes under 10 percent tax sla\n",salary);
	}

	if(salary >= 1000001 && salary <= 1500000){
		printf("\nsalary amount %f comes under 15 percent tax slab\n",salary);
	}
	
	if(salary >= 1500001 && salary <= 2000000){
		printf("\nsalary amount %f comes under 20 percent tax slab\n",salary);
	}

	if(salary >= 2000001){
		printf("\nsalary amount %f comes under 30 percent tax slab\n",salary);
	}

}
