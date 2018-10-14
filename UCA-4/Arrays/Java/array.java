/*
* Program For Arrays IUDT(Insertion Updation Deletion Traversal)
Time Complexities 
Insertion - O(1)
Updateion - O(1)
Deletion - O(1)
Traversal - O(N)
*/
import java.util.*;

class Test {
	/*
	Static Methods Used Here so that it can be called from Main Method
	*/
	static void insert(int[] arr,int pos,int value){
		arr[pos] = value;
	}

	static void traverse(int[] arr){
		System.out.println("Printing Array");
		for (int x:arr) {
			System.out.println(x);
		}
	}

	static void update(int[] arr,int pos,int value){
		arr[pos] = value;
	}

	static void delete(int[] arr,int pos){
		for (int i=pos;i<arr.length-1;i++) {
			arr[i] = arr[i+1];
		}
		arr[arr.length-1] = 0;
	}

	public static void main(String[] args) {
		int size = Integer.parseInt(args[0]);
		int arr[] = new int[size];
		for (int i=0;i<size;i++) {
			insert(arr,i,Integer.parseInt(args[i+1]));
		}
		traverse(arr);
		update(arr,2,69);
		delete(arr,3);
		traverse(arr);
	}
}