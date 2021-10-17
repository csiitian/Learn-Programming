package pattern;

import java.util.Scanner;

public class Sp25 {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter n :- ");
		int n = sc.nextInt();
		for(int i=0;i<n;i++) {
			for(int j=n-1;j>i;j--) {
				System.out.print(" ");
			}
			for(int j=0;j<2*i+1;j++) {
				System.out.print(Math.min(j+1,2*i-j+1));
			}
			System.out.println();
		}
	}
}

/*

Output :-
Enter n :- 5
    1
   121
  12321
 1234321
123454321

*/
