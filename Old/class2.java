//WAP To Display number occuring odd number of times
import java.util.*;
import java.util.Scanner;

class class2{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int arr[] = new int[5];
		int max = 0;
		for (int i=0;i<5;i++) {
			arr[i] = sc.nextInt();
			if(max<arr[i]){
				max = arr[i];
			}
		}
		System.out.println("Max"+max);
		int arr2[] = new int[max+1];
		for (int i=0;i<arr.length;i++) {
			arr2[arr[i]]++;
		}
		for (int i=0;i<arr2.length;i++) {
			if(arr2[i]%2 != 0){
				System.out.println("Value "+i+" is occurring "+arr2[i]);
			}
		}
	}
}