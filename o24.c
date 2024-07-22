#include<stdio.h>
void main (){
	char user_data;
	printf("Enter a character = ");
	scanf("%c",&user_data);

	printf("\nThe character entered is %c",user_data);
	if(user_data >= 'A' && user_data <= 'Z'){
			printf("\nEntered characater is capital letter\n");
		}
		else if(user_data >= 'a' && user_data <= 'z'){
			printf("\nEntered character is smallcase letter\n");
		}
	else{
		printf("\nEntered character is not an alphabet\n");
	}
	
	
}
