#include <iostream>
using namespace std;

int atoi(char *c){
	int op = 0;
	for (int i = 0; c[i]!= '\0'; ++i)
	{
		op = (op*10)+(c[i]-'0');
	}
	return op;
}

int main(int argc, char const *argv[])
{
	cout<<atoi(argv[1]);
	return 0;
}