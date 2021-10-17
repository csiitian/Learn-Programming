package pattern;

import java.util.Scanner;

public class Sp35 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter n :- ");
		int n = sc.nextInt();
		for(int i=0;i<2*n-1;i++) {
			int x = Math.min(i+1,2*n-(i+1));
			for(int j=0;j<Math.abs(n-i-1);j++) {
				System.out.print(" ");
			}
			System.out.print(x);
			for(int j=0;j<2*x-1;j++) {
				System.out.print(" ");
			}
			System.out.println(x);
		}
	}
}

/*

Output :-
Enter n :- 5
    1 1
   2   2
  3     3
 4       4
5         5
 4       4
  3     3
   2   2
    1 1

*/