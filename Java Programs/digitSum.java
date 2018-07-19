public class digitSum
{
	public static void main(String [] args)
	{
	int num= 532,reminder,sum=0;
	System.out.println("Number is "+num);
	while(num != 0)
	{
		reminder = num % 10;
		sum = sum + reminder;
		num = num / 10;
	}
	System.out.println("Sum of digits is "+sum);
	}
}