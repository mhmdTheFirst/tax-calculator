#include <stdio.h>
int main(){
	int c=1 , a=1 , b=1 , d=0, n;
	printf("please enter the number you want the procces continue till that \n");
	scanf("%d", &n);
	for (a;a<=n; a++){
		for (b;b<=a;b++){
			c=c*b;
		}
		d=d+c;
	}
	printf("the answer of summation is: %d \n",d);
	
	return 0;
}
