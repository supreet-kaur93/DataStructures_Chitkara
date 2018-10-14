//Swapping Two Variables Value
#include <iostream>
using namespace std;

void swap(int *n1,int *n2){
	*n1 = *n1 + *n2;
	*n2 = *n1 - *n2;
	*n1 = *n1 - *n2;
}

int main(int argc, char const *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	cout<<"X: "<<num1<<" Y: "<<num2<<endl;
	swap(&num1,&num2);
	cout<<"X: "<<num1<<" Y: "<<num2<<endl;
	return 0;
}