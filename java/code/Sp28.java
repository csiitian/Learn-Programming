package pattern;

import java.util.Scanner;

public class Sp28 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter n :- ");
		int n = sc.nextInt();
		for(int i=0;i<2*n;i++) {
			for(int k=0;k<=Math.min(i,2*n-i-1);k++) {
				System.out.print("*");
			}
			System.out.println();
		}
	}
}

/*

Output :-
Enter n :- 5
*
**
***
****
*****
*****
****
***
**
*

*/