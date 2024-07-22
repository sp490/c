#include<stdio.h>
void main(){
	int x = 4;
	int y = 5;
	int ans;

	ans = x-- | ++y;     //bitwise OR
	
	printf("%d \n",ans);     // 6
	printf("%d \n",x);       // 3
	printf("%d \n",y);       // 6
}
