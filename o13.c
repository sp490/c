#include<stdio.h>
void main(){
	int x = 1;
	int y = 5;
	int ans;

	ans = --x || --x ;         //logical OR
	printf("%d \n",ans);       // 0 || -1 = 1
	printf("%d \n",x);         // -1
	printf("%d \n",y);         // 5

	ans = ++x && --y ;         //logical AND
	printf("%d \n",ans);       // = 0 && == 0
	printf("%d \n",x);         // 0
	printf("%d \n",y);         // 5
}
