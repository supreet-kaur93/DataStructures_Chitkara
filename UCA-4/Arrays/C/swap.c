//Swapping Two Variables Value
#include <stdio.h>

void swap(int *n1,int *n2){
	*n1 = *n1 + *n2;
	*n2 = *n1 - *n2;
	*n1 = *n1 - *n2;
}

int main(int argc, char const *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	printf("X: %d Y: %d\n",num1,num2);
	swap(&num1,&num2);
	printf("X: %d Y: %d\n",num1,num2);
	return 0;
}