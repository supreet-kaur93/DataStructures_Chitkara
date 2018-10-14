import java.util.*;
import java.util.Scanner;

public class class1{
	void addElement(int number){

	}
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int arr[] = new int[10];
		for (int i=0;i<5;i++) {
			arr[i] = sc.nextInt();
		}
		System.out.println("Printing Array");
		for (int i=0;i<5 ;i++ ) {
			System.out.println(arr[i]);
		}
		System.out.println("Enter Position");
		int position = sc.nextInt();
		//Adding Element 
		for (int i=5;i>=position;i-- ) {
			arr[i] = arr[i-1];
		}
		arr[position] = 99;
		//Done
		System.out.println("Printing Array");
		for (int i=0;i<=5 ;i++ ) {
			System.out.println(arr[i]);
		}
		//Deleting Element
		System.out.println("Enter Position");
		position = sc.nextInt();
		arr[position] = 0;
		for (int i=position;i<5;i++) {
			arr[i] = arr[i+1];
		}
		System.out.println("Printing Array");
		for (int i=0;i<5 ;i++ ) {
			System.out.println(arr[i]);
		}
//To Find Element in an Array
		System.out.println("Enter Element to find");
		position = sc.nextInt();
		boolean elementFound = false;
		for (int i=0;i<5;i++) {
			if(arr[i]==position){
				elementFound = true;
				position = i;
				break;
			}
		}
		if(elementFound == false){
			System.out.println("Element not found");
		}else {
			System.out.println("Element found at "+position);
		}

	}
}