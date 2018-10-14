/*
* Rotate An Array By Given Times
*/
import java.util.*;

class test{

	static void rotateArray(int[] arr,int pos){
		while((pos--)!=0){
			int temp = arr[arr.length-1];
			for (int i = arr.length-1; i > 0; --i)
			{
				arr[i] = arr[i-1];
			}
			arr[0] = temp;
		}
	}

	public static void main(String[] args) {
		int size = Integer.parseInt(args[0]);
		int[] arr = new int[size];
		for (int i=0;i<size;i++) {
			arr[i] = Integer.parseInt(args[i+1]);
		}
		rotateArray(arr,2);
		for (int x :arr) {
			System.out.println(x);
		}
	}
}