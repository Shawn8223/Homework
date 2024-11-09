import java.util.Scanner;

public class Bar {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner input = new Scanner(System.in);
		
		int a,b,c,d,e;
		System.out.print("Enter the first number(1~30):");
		a = input.nextInt();
		System.out.print("Enter the second number(1~30):");
		b = input.nextInt();
		System.out.print("Enter the third number(1~30):");
		c = input.nextInt();
		System.out.print("Enter the fourth number(1~30):");
		d = input.nextInt();
		System.out.print("Enter the fifth number(1~30):");
		e = input.nextInt();
		
		System.out.print("1:");
		for(int i=0;i<a;i++)
		{
			System.out.print('*');
		}
		System.out.print("\n2:");
		for(int i=0;i<b;i++)
		{
			System.out.print('*');
		}
		System.out.print("\n3:");
		for(int i=0;i<c;i++)
		{
			System.out.print('*');
		}
		System.out.print("\n4:");
		for(int i=0;i<d;i++)
		{
			System.out.print('*');
		}
		System.out.print("\n5:");
		for(int i=0;i<e;i++)
		{
			System.out.print('*');
		}
	}

}
