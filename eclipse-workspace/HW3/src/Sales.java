import java.util.Scanner;

public class Sales {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		double a = 239.99;
		double b = 129.75;
		double c = 99.95;
		double d = 350.89;
		
		Scanner input = new Scanner(System.in);
		System.out.println("Enter how many you sale of the item.");
		
		System.out.print("Item 1:");
		double sales1=input.nextDouble();
		System.out.print("Item 2:");
		double sales2=input.nextDouble();
		System.out.print("Item 3:");
		double sales3=input.nextDouble();
		System.out.print("Item 4:");
		double sales4=input.nextDouble();
		
		double SalesAmount=0;
		SalesAmount = (sales1*a+sales2*b+sales3*c+sales4*d);
		
		double salary=0;
		salary = 200 + 0.09*SalesAmount;
		
		System.out.printf("Your total salary is:%.02f",salary);
	}

}
