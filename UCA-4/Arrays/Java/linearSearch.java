import java.util.*;

class test{

	static int linearSearch(int arr[],int numToFound){
		for (int i=0;i<arr.length;i++) {
			if(numToFound==arr[i])
				return i;
		}
		return -1;
	}

	public static void main(String[] args) {
		int size = Integer.parseInt(args[0]);
		int[] arr = new int[size];
		for (int i=0;i<size;i++) {
			arr[i] = Integer.parseInt(args[i+1]);
		}
		int numToFound = Integer.parseInt(args[size+1]);
		System.out.println("Number "+numToFound+" Found at "+linearSearch(arr,numToFound));
	}
}