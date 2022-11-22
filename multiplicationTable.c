#include <stdio.h>
int main (){
	int a=1 , n, b=1,c;
	printf ("please enter your desired number: \n");
	scanf("%d", &n);
	for (a;a<=n;a++){
		for (b; b<=n;b++){
			c=a*b;
			printf("\t");
			printf("%d",c);
		}
		b=1;
	 printf("\n");
	}
	return 0;
}

