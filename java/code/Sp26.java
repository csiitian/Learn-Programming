package pattern;

import java.util.Scanner;

public class Sp26 {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter n :- ");
		int n = sc.nextInt();
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				if(j>(n/2-i)&&j<(n/2+i)) System.out.print(" ");
				else System.out.print("*");
			}
			System.out.println();
		}
	}
}

/*

Output :-
Enter n :- 5
*****
** **
*   *

*/
