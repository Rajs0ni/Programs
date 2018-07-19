public class reverseNum
{
	public static void main(String [] args)
	{
		int num = 532, reminder;
		System.out.print("Reversal of "+num+" is ");  
		while(num != 0)
		{
			reminder = num % 10;
			System.out.print(reminder);
			num = num / 10;
		}
	}
	
}