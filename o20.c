#include<stdio.h>
void main(){
//	int x = 10,20,30;      //identifier expected error
//	printf("%d \n",x);

	int y = {10,20,30};    // excess elements in scalar initializer  warning
	printf("%d \n",y);
        printf("%p \n",&y);

	int z = (10,20,30);    // no warning no error
	printf("%d \n",z);   
        printf("%p \n",&z);
}

