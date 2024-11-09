
public class ClockTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Clock clock1=new Clock(15,22,51);
		System.out.println("The time is:"+ clock1.displayTime());
		
		clock1.setHour(18);
		clock1.setMinute(45);
		clock1.setSecond(20);
		System.out.println("The time is:"+ clock1.displayTime());
	}

}
