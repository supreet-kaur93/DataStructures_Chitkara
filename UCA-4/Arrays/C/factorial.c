//Factorial Of A Number
#include <stdio.h>

int factorial(int num){
	int fact = 1;
	while(num!=1){
		fact*=(num--);
	}
	return fact;
}

int main(int argc, char const *argv[])
{
	int num = atoi(argv[1]);
	printf("Factorial is %d\n",factorial(num));
	return 0;
}