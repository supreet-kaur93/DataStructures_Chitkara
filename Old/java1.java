/* Sita gets into lift in the ground floor , 
* the lift that sita gets in doest stop in all the floors.
* It stops in only 3 floors numbered n1,n2,n3.
* She wants to get down in the floor that is closest to n 
* if there are 2 choices she always prefer to climb down the stairs rather than climbing up.
* Help Sita in deciding the floor she should get down from lift.
*/

import java.util.*;
import java.util.Scanner;

class java1{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int n,n1,n2,n3;
		System.out.println("Enter Values of N,N1,N2,N3");
		n = sc.nextInt();
		n1 = sc.nextInt();
		n2 = sc.nextInt();
		n3 = sc.nextInt();
		if(n1<n && n2>n ){
			System.out.println("Nearest Floor is "+n1);
		}else if (n1<n && n2<n && n3 >n){
			System.out.println("Nearest Floor is "+n2);
		}else{
			System.out.println("Nearest Floor is "+n3);
		}
	}
}

