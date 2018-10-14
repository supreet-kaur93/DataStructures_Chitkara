/*
* In the gift store sita finds a lot of fancy articles with letter inscribed in it.
* She Decides to Select gifts for her friends Such that The first letter of their name are inscribed in the gift articles 
* There is a scanner device in the gift Shop that could iluminate the articles that contain the letters fed as input 
* There is another interfacing device that could pick first letter of all the name entered by the user
* Suddenly the device started malfunctioning and owner of the shop was very tense .Sita is a very close friend of owner and
* she offers to help her in fixingg this issue .She starts rewriting the program to be embedded in a scanner like device 
* Output is yes when the letter in the gift item is same as one of friends 
* Otherwise NO
*/

import java.util.*;
import java.util.Scanner;

class java2{
	public static void main(String args[]){
		String s;
		String arrS[] = new String[3];
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Lines");
		s = sc.nextLine();
		for (String x :arrS) {
			x = sc.nextLine();
		}
		for (String x :arrS) {
			if(x.getChar(0) == s.getChar(0)){
				System.out.println("Found ");
			}
		}
	}
}