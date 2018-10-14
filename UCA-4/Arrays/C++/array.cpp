/*
* Program For Arrays IUDT(Insertion Updation Deletion Traversal)
*/

#include<iostream>
using namespace std;
int size = 0;

void insertion(int *arr,int pos,int value){
	if(size==pos){
		return;
	}
	arr[pos] = value;
}

void traversal(int *arr){
	printf("Printing Of Array\n");
	for (int i = 0; i < size; ++i)
	{
		printf("%d\n",arr[i]);
	}
}

void updation(int *arr,int pos,int value){
	if(pos>=size || pos<0){
		return;
	}
	arr[pos] = value;
}

void deletion(int *arr,int pos){
	if(pos>=size || pos<0){
		return;
	}
	arr[pos] = 0;
}


int main(int argc, char const *argv[])
{
	size = atoi(argv[1]);
	int arr[size];
	int top = -1;
	int test = size;
	while(test--){
		insertion(arr,++top,atoi(argv[top+2]));
	}
	traversal(arr);
	updation(arr,2,69);
	deletion(arr,4);
	traversal(arr);
	return 0;
}