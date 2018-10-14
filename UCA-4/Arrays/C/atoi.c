#include <stdio.h>

int atoi(char c[]){
	int test = 0;
	for (int i = 0;c[i]!='\0'; ++i)
	{
		test = (test*10)+(c[i]-'0');
	}
	printf("%d\n",test);
	return test;
}

int main(int argc, char *argv[])
{
	atoi(argv[1]);
	return 0;
}