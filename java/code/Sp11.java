package pattern;

import java.util.Scanner;

public class Sp11 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter n :- ");
		int n = sc.nextInt();
		for(int i=0;i<n;i++) {
			for(int j=n-1;j>i;j--) {
				System.out.print(" ");
			}
			for(int k=0;k<2*(i+1);k++) {
				if(k == 0) System.out.print("/");
				else if(k == 2*(i+1)-1) System.out.print("\\");
				else if(n/2 == i) System.out.print("_");
				else System.out.print(" ");
			}
			System.out.println();
		}
	}
}

/*

Output :-
Enter n :- 5
    /\
   /  \
  /____\
 /      \
/        \

*/