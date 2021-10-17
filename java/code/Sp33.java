package pattern;

import java.util.Scanner;

public class Sp33 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter n :- ");
		int n = sc.nextInt();
		for(int i=0;i<2*n-1;i++) {
			for(int j=0;j<Math.abs(n-i-1);j++) {
				System.out.print(" ");
			}
			for(int j=0;j<Math.min(i+1,2*n-(i+1));j++) {
				System.out.print("@#");
			}
			System.out.println();
		}
	}
}


/* 

Output :-
Enter n :- 5
    @#
   @#@#
  @#@#@#
 @#@#@#@#
@#@#@#@#@#
 @#@#@#@#
  @#@#@#
   @#@#
    @#

*/