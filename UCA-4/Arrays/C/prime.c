//Check if Number is Prime or Not
#include <stdio.h>

int isPrime(int num){
	for (int i = 2; i < num/2; ++i)
	{
		if(num%i==0)
			return 0;
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	int num = atoi(argv[1]);
	printf("%d\n",isPrime(num));
	return 0;
}