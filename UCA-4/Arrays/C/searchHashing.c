//SEARCH ELEMENT USING HASHING
//MAX ELEMENT SHOULD NOT BE GREATER THAN 99
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int searchHash(int *arr,int num){
	if(arr[num]!=0)
		return 1;
	return 0;
}

int main(int argc,char const *argv[]){
	int size = atoi(argv[1]);
	int *arr = (int*) calloc(100,sizeof(int));
	if(arr!=NULL){
		for (int i = 0; i < size; ++i)
			arr[atoi(argv[i+2])]++;	
	}
	printf("%d\n",searchHash(arr,atoi(argv[size+2])));
	return 0;
}