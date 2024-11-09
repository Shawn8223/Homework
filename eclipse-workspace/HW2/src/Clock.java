
public class Clock {

	private int hour;
	private int minute;
	private int second;
	
	Clock(int hour,int minute,int second)
	{
		this.hour=hour;
		this.minute=minute;
		this.second=second;
	}

	public int getHour() {
		return hour;
	}

	public void setHour(int hour) {
		if(hour>23)
		{
			this.hour=0;
			this.minute=0;
			this.second=0;
		}
		else
		{
			this.hour = hour;
		}
		
	}

	public int getMinute() {
		return minute;
	}

	public void setMinute(int minute) {
		
		if(minute>59)
		{
			this.hour=0;
			this.minute=0;
			this.second=0;
		}
		else
		{
			this.minute = minute;
		}
	}

	public int getSecond() {
		return second;
	}

	public void setSecond(int second) {
		if(second>59)
		{
			this.hour=0;
			this.minute=0;
			this.second=0;
		}
		else
		{
			this.second = second;
		}
	}
	
	public String displayTime()
	{
		return String.format("%02d:%02d:%02d",hour,minute,second);
	}

}
