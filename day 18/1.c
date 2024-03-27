#include <stdio.h> 
void main() 
{ 
	int N;

	printf("enter the value of N:");
	scanf("%d",&N);

	int flag = 0; 

	double sqroot; 

	for (int i = 2; i <= sqroot; i++) { 

		 
		if (N % i == 0) { 
			flag = 0; 
			break; 
		} 
	} 

	if (flag) { 
		printf("%d is a prime number", N); 
	} 
	else { 
		printf("%d is not a prime number", N); 
	} 


}
