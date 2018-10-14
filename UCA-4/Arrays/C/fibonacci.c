//Fibonacci Series
#include <stdio.h>

void printFibonacci(int num){
	int f1 = 0;
	int f2 = 1;
	printf("%d %d ",f1,f2);
	num-=2;
	while(num--){
		int temp = f1+f2;
		f1 = f2;
		f2 = temp;
		printf("%d ",f2);
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	int num = atoi(argv[1]);
	printFibonacci(num);
	return 0;
}