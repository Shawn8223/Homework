import java.util.Scanner;

public class Grades {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner input = new Scanner(System.in);
		
		int gradeA=0,gradeB=0,gradeC=0,gradeD=0;
		
		for(int i=1;i<=5;i++)
		{
			System.out.printf("Enter student%d's name:",i);
			String name = input.next();
			
			System.out.printf("Enter grades for %s(A,B,C,D):",name);
			char grade = input.next().toUpperCase().charAt(0);
			
			switch(grade) {
			case 'A':
				gradeA++;
				break;
			case 'B':
				gradeB++;
				break;
			case 'C':
				gradeC++;
				break;
			case 'D':
				gradeD++;
				break;
			default:
				break;
			}
			
		}
		
		System.out.printf("%n%d students got a grade A\n",gradeA);
		System.out.printf("%d students got a grade B\n",gradeB);
		System.out.printf("%d students got a grade C\n",gradeC);
		System.out.printf("%d students got a grade D\n",gradeD);
		
	}

}
