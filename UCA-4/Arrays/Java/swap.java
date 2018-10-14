//Swapping Two Variables Value
/* IMP
* In Java Methods use PASS-BY-VALUE instead of PASS-BY-REFERENCE
* Therefore used this trick to swap value
*/
import java.util.*;

class Test{
	static int swap(int num1,int num2){
		return num1;
	}

	public static void main(String[] args) {
		if(args!=null){
			int num1 = Integer.parseInt(args[0]);	
			int num2 = Integer.parseInt(args[1]);
			System.out.println("X: "+num1+" Y: "+num2);
			num1 = swap(num2,num2=num1);
			System.out.println("X: "+num1+" Y: "+num2);
		}
		
	}
}
