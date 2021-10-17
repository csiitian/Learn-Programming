package pattern;

import java.util.Scanner;

public class Sp18 {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter n :- ");
		int n = sc.nextInt();
		for(int i=0;i<n;i++ ) {
			for(int j=0;j<i;j++) {
				System.out.print(" ");
			}
			for(int k=0;k<2*(n-i-1);k++) {
				if(k==0) System.out.print("*");
				else System.out.print(" ");
			}
			System.out.println("*");
		}
	}
}

/*

Output :-
Enter n :- 5
*       *
 *     *
  *   *
   * *
    *

*/