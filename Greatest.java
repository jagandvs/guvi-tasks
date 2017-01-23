package guvi;
import java.util.Scanner;
public class Greatest {

	public static void main(String[] args) {
		System.out.println("Enter the three numbers");
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		if(a>b&&a>c)
			System.out.println("The greatest number among the three is "+a);
		else if(b>a&&b>c)
			System.out.println("The greatest number among the three is "+b);
		else
			System.out.println("The greatest number among the three is "+c);
			
	}

}
